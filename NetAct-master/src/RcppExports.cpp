// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// GSEA_permute
NumericMatrix GSEA_permute(Rcpp::List GSDB, Rcpp::NumericVector stats_vector, int nperm);
RcppExport SEXP _NetAct_GSEA_permute(SEXP GSDBSEXP, SEXP stats_vectorSEXP, SEXP npermSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type GSDB(GSDBSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type stats_vector(stats_vectorSEXP);
    Rcpp::traits::input_parameter< int >::type nperm(npermSEXP);
    rcpp_result_gen = Rcpp::wrap(GSEA_permute(GSDB, stats_vector, nperm));
    return rcpp_result_gen;
END_RCPP
}
// apply_cumsum_col
NumericMatrix apply_cumsum_col(NumericMatrix m);
RcppExport SEXP _NetAct_apply_cumsum_col(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(apply_cumsum_col(m));
    return rcpp_result_gen;
END_RCPP
}
// GSEA_test
NumericMatrix GSEA_test(Rcpp::List GSDB, Rcpp::NumericVector stats_vector, int nperm);
RcppExport SEXP _NetAct_GSEA_test(SEXP GSDBSEXP, SEXP stats_vectorSEXP, SEXP npermSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type GSDB(GSDBSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type stats_vector(stats_vectorSEXP);
    Rcpp::traits::input_parameter< int >::type nperm(npermSEXP);
    rcpp_result_gen = Rcpp::wrap(GSEA_test(GSDB, stats_vector, nperm));
    return rcpp_result_gen;
END_RCPP
}
// cppGSEA
NumericVector cppGSEA(Rcpp::List GSDB, Rcpp::NumericVector stats_vector);
RcppExport SEXP _NetAct_cppGSEA(SEXP GSDBSEXP, SEXP stats_vectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type GSDB(GSDBSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type stats_vector(stats_vectorSEXP);
    rcpp_result_gen = Rcpp::wrap(cppGSEA(GSDB, stats_vector));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_NetAct_GSEA_permute", (DL_FUNC) &_NetAct_GSEA_permute, 3},
    {"_NetAct_apply_cumsum_col", (DL_FUNC) &_NetAct_apply_cumsum_col, 1},
    {"_NetAct_GSEA_test", (DL_FUNC) &_NetAct_GSEA_test, 3},
    {"_NetAct_cppGSEA", (DL_FUNC) &_NetAct_cppGSEA, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_NetAct(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}