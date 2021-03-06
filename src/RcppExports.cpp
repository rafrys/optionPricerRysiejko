// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// getEuropeanDownAndOutPutPrice
double getEuropeanDownAndOutPutPrice(int nInt, double Strike, double Spot, double Vol, double Rfr, double Expiry, double Barrier, int nReps);
RcppExport SEXP _optionPricerRysiejko_getEuropeanDownAndOutPutPrice(SEXP nIntSEXP, SEXP StrikeSEXP, SEXP SpotSEXP, SEXP VolSEXP, SEXP RfrSEXP, SEXP ExpirySEXP, SEXP BarrierSEXP, SEXP nRepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nInt(nIntSEXP);
    Rcpp::traits::input_parameter< double >::type Strike(StrikeSEXP);
    Rcpp::traits::input_parameter< double >::type Spot(SpotSEXP);
    Rcpp::traits::input_parameter< double >::type Vol(VolSEXP);
    Rcpp::traits::input_parameter< double >::type Rfr(RfrSEXP);
    Rcpp::traits::input_parameter< double >::type Expiry(ExpirySEXP);
    Rcpp::traits::input_parameter< double >::type Barrier(BarrierSEXP);
    Rcpp::traits::input_parameter< int >::type nReps(nRepsSEXP);
    rcpp_result_gen = Rcpp::wrap(getEuropeanDownAndOutPutPrice(nInt, Strike, Spot, Vol, Rfr, Expiry, Barrier, nReps));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello
List rcpp_hello();
RcppExport SEXP _optionPricerRysiejko_rcpp_hello() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _optionPricerRysiejko_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_optionPricerRysiejko_getEuropeanDownAndOutPutPrice", (DL_FUNC) &_optionPricerRysiejko_getEuropeanDownAndOutPutPrice, 8},
    {"_optionPricerRysiejko_rcpp_hello", (DL_FUNC) &_optionPricerRysiejko_rcpp_hello, 0},
    {"_optionPricerRysiejko_rcpp_hello_world", (DL_FUNC) &_optionPricerRysiejko_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_optionPricerRysiejko(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
