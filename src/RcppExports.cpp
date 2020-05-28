// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// register_gdal_cpp
LogicalVector register_gdal_cpp();
RcppExport SEXP _dirigible_register_gdal_cpp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(register_gdal_cpp());
    return rcpp_result_gen;
END_RCPP
}
// cleanup_gdal_cpp
LogicalVector cleanup_gdal_cpp();
RcppExport SEXP _dirigible_cleanup_gdal_cpp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cleanup_gdal_cpp());
    return rcpp_result_gen;
END_RCPP
}
// version_gdal_cpp
CharacterVector version_gdal_cpp();
RcppExport SEXP _dirigible_version_gdal_cpp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(version_gdal_cpp());
    return rcpp_result_gen;
END_RCPP
}
// drivers_list_gdal_cpp
List drivers_list_gdal_cpp();
RcppExport SEXP _dirigible_drivers_list_gdal_cpp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(drivers_list_gdal_cpp());
    return rcpp_result_gen;
END_RCPP
}
// proj_to_wkt_gdal_cpp
CharacterVector proj_to_wkt_gdal_cpp(CharacterVector proj4string);
RcppExport SEXP _dirigible_proj_to_wkt_gdal_cpp(SEXP proj4stringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type proj4string(proj4stringSEXP);
    rcpp_result_gen = Rcpp::wrap(proj_to_wkt_gdal_cpp(proj4string));
    return rcpp_result_gen;
END_RCPP
}
// driver_gdal_cpp
CharacterVector driver_gdal_cpp(CharacterVector dsn);
RcppExport SEXP _dirigible_driver_gdal_cpp(SEXP dsnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    rcpp_result_gen = Rcpp::wrap(driver_gdal_cpp(dsn));
    return rcpp_result_gen;
END_RCPP
}
// layer_names_gdal_cpp
CharacterVector layer_names_gdal_cpp(CharacterVector dsn);
RcppExport SEXP _dirigible_layer_names_gdal_cpp(SEXP dsnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    rcpp_result_gen = Rcpp::wrap(layer_names_gdal_cpp(dsn));
    return rcpp_result_gen;
END_RCPP
}
// feature_count_gdal_cpp
DoubleVector feature_count_gdal_cpp(CharacterVector dsn, IntegerVector layer);
RcppExport SEXP _dirigible_feature_count_gdal_cpp(SEXP dsnSEXP, SEXP layerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    rcpp_result_gen = Rcpp::wrap(feature_count_gdal_cpp(dsn, layer));
    return rcpp_result_gen;
END_RCPP
}
// read_fields_gdal_cpp
List read_fields_gdal_cpp(CharacterVector dsn, IntegerVector layer, CharacterVector sql, IntegerVector limit_n, IntegerVector skip_n, NumericVector ex, CharacterVector fid_column_name);
RcppExport SEXP _dirigible_read_fields_gdal_cpp(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP limit_nSEXP, SEXP skip_nSEXP, SEXP exSEXP, SEXP fid_column_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type limit_n(limit_nSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type skip_n(skip_nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type fid_column_name(fid_column_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(read_fields_gdal_cpp(dsn, layer, sql, limit_n, skip_n, ex, fid_column_name));
    return rcpp_result_gen;
END_RCPP
}
// read_geometry_gdal_cpp
List read_geometry_gdal_cpp(CharacterVector dsn, IntegerVector layer, CharacterVector sql, CharacterVector what, CharacterVector textformat, IntegerVector limit_n, IntegerVector skip_n, NumericVector ex);
RcppExport SEXP _dirigible_read_geometry_gdal_cpp(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP whatSEXP, SEXP textformatSEXP, SEXP limit_nSEXP, SEXP skip_nSEXP, SEXP exSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type what(whatSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type textformat(textformatSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type limit_n(limit_nSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type skip_n(skip_nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    rcpp_result_gen = Rcpp::wrap(read_geometry_gdal_cpp(dsn, layer, sql, what, textformat, limit_n, skip_n, ex));
    return rcpp_result_gen;
END_RCPP
}
// read_names_gdal_cpp
List read_names_gdal_cpp(CharacterVector dsn, IntegerVector layer, CharacterVector sql, IntegerVector limit_n, IntegerVector skip_n, NumericVector ex);
RcppExport SEXP _dirigible_read_names_gdal_cpp(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP limit_nSEXP, SEXP skip_nSEXP, SEXP exSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type limit_n(limit_nSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type skip_n(skip_nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    rcpp_result_gen = Rcpp::wrap(read_names_gdal_cpp(dsn, layer, sql, limit_n, skip_n, ex));
    return rcpp_result_gen;
END_RCPP
}
// projection_info_gdal_cpp
List projection_info_gdal_cpp(CharacterVector dsn, IntegerVector layer, CharacterVector sql);
RcppExport SEXP _dirigible_projection_info_gdal_cpp(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    rcpp_result_gen = Rcpp::wrap(projection_info_gdal_cpp(dsn, layer, sql));
    return rcpp_result_gen;
END_RCPP
}
// report_fields_gdal_cpp
CharacterVector report_fields_gdal_cpp(CharacterVector dsn, IntegerVector layer, CharacterVector sql);
RcppExport SEXP _dirigible_report_fields_gdal_cpp(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    rcpp_result_gen = Rcpp::wrap(report_fields_gdal_cpp(dsn, layer, sql));
    return rcpp_result_gen;
END_RCPP
}
// vsi_list_gdal_cpp
CharacterVector vsi_list_gdal_cpp(CharacterVector dsn);
RcppExport SEXP _dirigible_vsi_list_gdal_cpp(SEXP dsnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    rcpp_result_gen = Rcpp::wrap(vsi_list_gdal_cpp(dsn));
    return rcpp_result_gen;
END_RCPP
}
// sds_list_gdal_cpp
CharacterVector sds_list_gdal_cpp(CharacterVector dsn);
RcppExport SEXP _dirigible_sds_list_gdal_cpp(SEXP dsnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    rcpp_result_gen = Rcpp::wrap(sds_list_gdal_cpp(dsn));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dirigible_register_gdal_cpp", (DL_FUNC) &_dirigible_register_gdal_cpp, 0},
    {"_dirigible_cleanup_gdal_cpp", (DL_FUNC) &_dirigible_cleanup_gdal_cpp, 0},
    {"_dirigible_version_gdal_cpp", (DL_FUNC) &_dirigible_version_gdal_cpp, 0},
    {"_dirigible_drivers_list_gdal_cpp", (DL_FUNC) &_dirigible_drivers_list_gdal_cpp, 0},
    {"_dirigible_proj_to_wkt_gdal_cpp", (DL_FUNC) &_dirigible_proj_to_wkt_gdal_cpp, 1},
    {"_dirigible_driver_gdal_cpp", (DL_FUNC) &_dirigible_driver_gdal_cpp, 1},
    {"_dirigible_layer_names_gdal_cpp", (DL_FUNC) &_dirigible_layer_names_gdal_cpp, 1},
    {"_dirigible_feature_count_gdal_cpp", (DL_FUNC) &_dirigible_feature_count_gdal_cpp, 2},
    {"_dirigible_read_fields_gdal_cpp", (DL_FUNC) &_dirigible_read_fields_gdal_cpp, 7},
    {"_dirigible_read_geometry_gdal_cpp", (DL_FUNC) &_dirigible_read_geometry_gdal_cpp, 8},
    {"_dirigible_read_names_gdal_cpp", (DL_FUNC) &_dirigible_read_names_gdal_cpp, 6},
    {"_dirigible_projection_info_gdal_cpp", (DL_FUNC) &_dirigible_projection_info_gdal_cpp, 3},
    {"_dirigible_report_fields_gdal_cpp", (DL_FUNC) &_dirigible_report_fields_gdal_cpp, 3},
    {"_dirigible_vsi_list_gdal_cpp", (DL_FUNC) &_dirigible_vsi_list_gdal_cpp, 1},
    {"_dirigible_sds_list_gdal_cpp", (DL_FUNC) &_dirigible_sds_list_gdal_cpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_dirigible(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
