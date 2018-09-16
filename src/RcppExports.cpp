// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_01normalize
arma::mat rcpp_01normalize(arma::mat& input);
RcppExport SEXP _tvR_rcpp_01normalize(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_01normalize(input));
    return rcpp_result_gen;
END_RCPP
}
// image_tvl2_FD
arma::mat image_tvl2_FD(arma::mat& u0, const double lambda, const double niter);
RcppExport SEXP _tvR_image_tvl2_FD(SEXP u0SEXP, SEXP lambdaSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type u0(u0SEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(image_tvl2_FD(u0, lambda, niter));
    return rcpp_result_gen;
END_RCPP
}
// image_tvl1_primaldual
arma::mat image_tvl1_primaldual(arma::mat& u, const double lambda, const double niter);
RcppExport SEXP _tvR_image_tvl1_primaldual(SEXP uSEXP, SEXP lambdaSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(image_tvl1_primaldual(u, lambda, niter));
    return rcpp_result_gen;
END_RCPP
}
// image_tvl2_primaldual
arma::mat image_tvl2_primaldual(arma::mat& u, const double lambda, const double niter);
RcppExport SEXP _tvR_image_tvl2_primaldual(SEXP uSEXP, SEXP lambdaSEXP, SEXP niterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const double >::type niter(niterSEXP);
    rcpp_result_gen = Rcpp::wrap(image_tvl2_primaldual(u, lambda, niter));
    return rcpp_result_gen;
END_RCPP
}
// signal_tvl2_IC
arma::rowvec signal_tvl2_IC(arma::rowvec& y, const double lambda, const int maxiter);
RcppExport SEXP _tvR_signal_tvl2_IC(SEXP ySEXP, SEXP lambdaSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(signal_tvl2_IC(y, lambda, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// signal_tvl2_MM
arma::colvec signal_tvl2_MM(arma::colvec& y, const double lambda, const int maxiter);
RcppExport SEXP _tvR_signal_tvl2_MM(SEXP ySEXP, SEXP lambdaSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(signal_tvl2_MM(y, lambda, maxiter));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tvR_rcpp_01normalize", (DL_FUNC) &_tvR_rcpp_01normalize, 1},
    {"_tvR_image_tvl2_FD", (DL_FUNC) &_tvR_image_tvl2_FD, 3},
    {"_tvR_image_tvl1_primaldual", (DL_FUNC) &_tvR_image_tvl1_primaldual, 3},
    {"_tvR_image_tvl2_primaldual", (DL_FUNC) &_tvR_image_tvl2_primaldual, 3},
    {"_tvR_signal_tvl2_IC", (DL_FUNC) &_tvR_signal_tvl2_IC, 3},
    {"_tvR_signal_tvl2_MM", (DL_FUNC) &_tvR_signal_tvl2_MM, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_tvR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
