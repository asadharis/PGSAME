// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cpp_spline
List cpp_spline(arma::vec y_ord, arma::vec x_ord, double lambda, int n, int n_grid);
RcppExport SEXP uniSolve_cpp_spline(SEXP y_ordSEXP, SEXP x_ordSEXP, SEXP lambdaSEXP, SEXP nSEXP, SEXP n_gridSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y_ord(y_ordSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x_ord(x_ordSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type n_grid(n_gridSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_spline(y_ord, x_ord, lambda, n, n_grid));
    return rcpp_result_gen;
END_RCPP
}
// cpp_spline_raw
arma::vec cpp_spline_raw(arma::vec y_ord, arma::vec x_ord, double lambda, int n, int n_grid);
RcppExport SEXP uniSolve_cpp_spline_raw(SEXP y_ordSEXP, SEXP x_ordSEXP, SEXP lambdaSEXP, SEXP nSEXP, SEXP n_gridSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y_ord(y_ordSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x_ord(x_ordSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type n_grid(n_gridSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_spline_raw(y_ord, x_ord, lambda, n, n_grid));
    return rcpp_result_gen;
END_RCPP
}
// cpp_temp_func
double cpp_temp_func(double lambda, arma::vec y_ord, arma::vec x_ord, int n, int n_grid, double lambda2);
RcppExport SEXP uniSolve_cpp_temp_func(SEXP lambdaSEXP, SEXP y_ordSEXP, SEXP x_ordSEXP, SEXP nSEXP, SEXP n_gridSEXP, SEXP lambda2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y_ord(y_ordSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x_ord(x_ordSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type n_grid(n_gridSEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_temp_func(lambda, y_ord, x_ord, n, n_grid, lambda2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_uniroot
double cpp_uniroot(double lambda_min, double lambda_max, arma::vec y_ord, arma::vec x_ord, int n, int n_grid, double lambda2, double tol);
RcppExport SEXP uniSolve_cpp_uniroot(SEXP lambda_minSEXP, SEXP lambda_maxSEXP, SEXP y_ordSEXP, SEXP x_ordSEXP, SEXP nSEXP, SEXP n_gridSEXP, SEXP lambda2SEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda_min(lambda_minSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_max(lambda_maxSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y_ord(y_ordSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x_ord(x_ordSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type n_grid(n_gridSEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_uniroot(lambda_min, lambda_max, y_ord, x_ord, n, n_grid, lambda2, tol));
    return rcpp_result_gen;
END_RCPP
}
// cpp_solve_prox
arma::vec cpp_solve_prox(arma::vec y_ord, arma::vec x_ord, double lambda1, double lambda2, int n, int n_grid);
RcppExport SEXP uniSolve_cpp_solve_prox(SEXP y_ordSEXP, SEXP x_ordSEXP, SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP nSEXP, SEXP n_gridSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y_ord(y_ordSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x_ord(x_ordSEXP);
    Rcpp::traits::input_parameter< double >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type n_grid(n_gridSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_solve_prox(y_ord, x_ord, lambda1, lambda2, n, n_grid));
    return rcpp_result_gen;
END_RCPP
}
// cpp_spp_one
List cpp_spp_one(arma::vec y, arma::mat x_ord, arma::umat ord, arma::umat ranks, double lambda1, double lambda2, arma::mat init_fhat, double init_intercept, int n, int p, int max_iter, double tol, double step_size, double alpha);
RcppExport SEXP uniSolve_cpp_spp_one(SEXP ySEXP, SEXP x_ordSEXP, SEXP ordSEXP, SEXP ranksSEXP, SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP init_fhatSEXP, SEXP init_interceptSEXP, SEXP nSEXP, SEXP pSEXP, SEXP max_iterSEXP, SEXP tolSEXP, SEXP step_sizeSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x_ord(x_ordSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ord(ordSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type ranks(ranksSEXP);
    Rcpp::traits::input_parameter< double >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type init_fhat(init_fhatSEXP);
    Rcpp::traits::input_parameter< double >::type init_intercept(init_interceptSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< double >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_spp_one(y, x_ord, ord, ranks, lambda1, lambda2, init_fhat, init_intercept, n, p, max_iter, tol, step_size, alpha));
    return rcpp_result_gen;
END_RCPP
}