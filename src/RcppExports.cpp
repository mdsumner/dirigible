// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// register_gdal
LogicalVector register_gdal();
RcppExport SEXP _dirigible_register_gdal() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(register_gdal());
    return rcpp_result_gen;
END_RCPP
}
// cleanup_gdal
LogicalVector cleanup_gdal();
RcppExport SEXP _dirigible_cleanup_gdal() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cleanup_gdal());
    return rcpp_result_gen;
END_RCPP
}
// driver_gdal
CharacterVector driver_gdal(CharacterVector dsn);
RcppExport SEXP _dirigible_driver_gdal(SEXP dsnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    rcpp_result_gen = Rcpp::wrap(driver_gdal(dsn));
    return rcpp_result_gen;
END_RCPP
}
// layer_names_gdal
CharacterVector layer_names_gdal(CharacterVector dsn);
RcppExport SEXP _dirigible_layer_names_gdal(SEXP dsnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    rcpp_result_gen = Rcpp::wrap(layer_names_gdal(dsn));
    return rcpp_result_gen;
END_RCPP
}
// feature_count_gdal
DoubleVector feature_count_gdal(CharacterVector dsn, IntegerVector layer, LogicalVector iterate);
RcppExport SEXP _dirigible_feature_count_gdal(SEXP dsnSEXP, SEXP layerSEXP, SEXP iterateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type iterate(iterateSEXP);
    rcpp_result_gen = Rcpp::wrap(feature_count_gdal(dsn, layer, iterate));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dirigible_register_gdal", (DL_FUNC) &_dirigible_register_gdal, 0},
    {"_dirigible_cleanup_gdal", (DL_FUNC) &_dirigible_cleanup_gdal, 0},
    {"_dirigible_driver_gdal", (DL_FUNC) &_dirigible_driver_gdal, 1},
    {"_dirigible_layer_names_gdal", (DL_FUNC) &_dirigible_layer_names_gdal, 1},
    {"_dirigible_feature_count_gdal", (DL_FUNC) &_dirigible_feature_count_gdal, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_dirigible(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
