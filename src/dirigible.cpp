#include <Rcpp.h>
#include "gdalheaders/gdalheaders.h"
#include "gdalwarpmem/gdalwarpmem.h"
#include "gdalgeometry/gdalgeometry.h"
using namespace Rcpp;



// [[Rcpp::export]]
List geometry_cpp_limit_skip(CharacterVector dsn, IntegerVector layer,
                  CharacterVector sql, NumericVector ex, CharacterVector format,
                  IntegerVector limit_n, IntegerVector skip_n) {
  GDALDataset       *poDS;
  poDS = (GDALDataset*) GDALOpenEx(dsn[0], GDAL_OF_VECTOR, NULL, NULL, NULL );
  if( poDS == NULL )
  {
    Rcpp::stop("Open failed.\n");
  }
  OGRLayer *p_layer = gdalheaders::gdal_layer(poDS, layer, sql, ex);
  NumericVector ij(2);
  ij[0] = skip_n[0];
  ij[1] = skip_n[0] + limit_n[0] - 1;
  List g_list = gdalgeometry::layer_read_geom_ij(p_layer, format, ij);
  // clean up if SQL was used https://www.gdal.org/classGDALDataset.html#ab2c2b105b8f76a279e6a53b9b4a182e0
  if (sql[0] != "") {
    poDS->ReleaseResultSet(p_layer);
  }
  return g_list;
}

// [[Rcpp::export]]
List geometry_cpp(CharacterVector dsn, IntegerVector layer,
                  CharacterVector sql, NumericVector ex,
                   CharacterVector format, NumericVector fid) {
  GDALDataset       *poDS;
  poDS = (GDALDataset*) GDALOpenEx(dsn[0], GDAL_OF_VECTOR, NULL, NULL, NULL );
  if( poDS == NULL )
  {
    Rcpp::stop("Open failed.\n");
  }
  OGRLayer *p_layer = gdalheaders::gdal_layer(poDS, layer, sql, ex);
  List g_list = gdalgeometry::layer_read_geom_fa(p_layer, format, fid);
  // clean up if SQL was used https://www.gdal.org/classGDALDataset.html#ab2c2b105b8f76a279e6a53b9b4a182e0
  if (sql[0] != "") {
    poDS->ReleaseResultSet(p_layer);
  }
  GDALClose(poDS);
  return g_list;
}
// [[Rcpp::export]]
LogicalVector register_gdal_cpp() {
  gdalheaders::gdal_register_all();
  gdalheaders::ogr_register_all();

  LogicalVector out(1);
  out[0] = true;
  return out;
}

// [[Rcpp::export]]
LogicalVector cleanup_gdal_cpp() {
  gdalheaders::ogr_cleanup_all();
  gdalheaders::osr_cleanup();

  LogicalVector out(1);
  out[0] = true;
  return out;
}
// [[Rcpp::export]]
CharacterVector version_gdal_cpp() {
  return gdalheaders::gdal_version();
}
// [[Rcpp::export]]
List drivers_list_gdal_cpp() {
  return gdalheaders::gdal_list_drivers();
}
// [[Rcpp::export]]
CharacterVector proj_to_wkt_gdal_cpp(CharacterVector proj4string) {
  return gdalheaders::gdal_proj_to_wkt(proj4string);
}
// [[Rcpp::export]]
CharacterVector driver_gdal_cpp(CharacterVector dsn) {
  return gdalheaders::gdal_driver(dsn);
}
// [[Rcpp::export]]
CharacterVector layer_names_gdal_cpp(CharacterVector dsn) {
  return gdalheaders::gdal_layer_names(dsn);
}
// [[Rcpp::export]]
DoubleVector feature_count_gdal_cpp(CharacterVector dsn,  // double, could be a lot of features
                     IntegerVector layer, CharacterVector sql, NumericVector ex) {
 return gdalheaders::gdal_feature_count(dsn, layer, sql, ex);
}

// [[Rcpp::export]]
List read_fields_gdal_cpp(CharacterVector dsn,
                      IntegerVector layer,
                      CharacterVector sql,
                      IntegerVector limit_n,
                      IntegerVector skip_n,
                      NumericVector ex,
                      CharacterVector fid_column_name) {
  return gdalheaders::gdal_read_fields(dsn, layer, sql, limit_n, skip_n, ex, fid_column_name);
}

// [[Rcpp::export]]
List read_geometry_gdal_cpp(CharacterVector dsn,
                         IntegerVector layer,
                         CharacterVector sql,
                         CharacterVector what,
                         CharacterVector textformat,
                         IntegerVector limit_n,
                         IntegerVector skip_n,
                         NumericVector ex ) {
  return gdalheaders::gdal_read_geometry(dsn, layer, sql, what, textformat, limit_n, skip_n, ex);
}



// [[Rcpp::export]]
List read_names_gdal_cpp(CharacterVector dsn,
                        IntegerVector layer,
                        CharacterVector sql,
                        IntegerVector limit_n,
                        IntegerVector skip_n,
                        NumericVector ex ) {
  return gdalheaders::gdal_read_names(dsn, layer, sql, limit_n, skip_n, ex);
}

// [[Rcpp::export]]
List projection_info_gdal_cpp(CharacterVector dsn,
                         IntegerVector layer,
                         CharacterVector sql) {
  return gdalheaders::gdal_projection_info(dsn, layer, sql);
}

// [[Rcpp::export]]
CharacterVector report_fields_gdal_cpp(CharacterVector dsn,
                              IntegerVector layer,
                              CharacterVector sql) {
  return gdalheaders::gdal_report_fields(dsn, layer, sql);
}

// [[Rcpp::export]]
CharacterVector vsi_list_gdal_cpp(CharacterVector dsn) {
  return gdalheaders::gdal_vsi_list(dsn);
}

// [[Rcpp::export]]
CharacterVector sds_list_gdal_cpp(CharacterVector dsn) {
  return gdalheaders::gdal_sds_list(dsn[0]);
}

// [[Rcpp::export]]
List warp_in_memory_gdal_cpp(CharacterVector dsn,
                             CharacterVector source_WKT,
                             CharacterVector target_WKT,
                             NumericVector target_geotransform,
                             IntegerVector target_dim,
                             IntegerVector band) {
return gdalwarpmem::gdal_warp_in_memory(dsn,
                    source_WKT,
                    target_WKT,
                    target_geotransform,
                    target_dim,
                    band);
}
// [[Rcpp::export]]
List raster_info_gdal_cpp(CharacterVector dsn, LogicalVector min_max) {
  return gdalheaders::gdal_raster_info(dsn, min_max);
}

// [[Rcpp::export]]
List raster_gcp_gdal_cpp(CharacterVector dsn) {
  return gdalheaders::gdal_raster_gcp(dsn);
}

// [[Rcpp::export]]
List raster_io_gdal_cpp(CharacterVector dsn,
                        IntegerVector window,
                        IntegerVector band,
                        CharacterVector resample) {
  return gdalheaders::gdal_raster_io(dsn, window, band, resample);
}
