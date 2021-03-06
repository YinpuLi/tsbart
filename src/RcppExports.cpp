// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// do_rgig1
double do_rgig1(double lambda, double chi, double psi);
RcppExport SEXP _tsbart_do_rgig1(SEXP lambdaSEXP, SEXP chiSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type chi(chiSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(do_rgig1(lambda, chi, psi));
    return rcpp_result_gen;
END_RCPP
}
// gig_norm
double gig_norm(double lambda, double chi, double psi);
RcppExport SEXP _tsbart_gig_norm(SEXP lambdaSEXP, SEXP chiSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type chi(chiSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(gig_norm(lambda, chi, psi));
    return rcpp_result_gen;
END_RCPP
}
// checkFit
List checkFit(arma::vec y, arma::mat mcmcdraws, bool probit, bool doWaic, Rcpp::Nullable<Rcpp::NumericVector> sig, Rcpp::Nullable<Rcpp::IntegerVector> yobs);
RcppExport SEXP _tsbart_checkFit(SEXP ySEXP, SEXP mcmcdrawsSEXP, SEXP probitSEXP, SEXP doWaicSEXP, SEXP sigSEXP, SEXP yobsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mcmcdraws(mcmcdrawsSEXP);
    Rcpp::traits::input_parameter< bool >::type probit(probitSEXP);
    Rcpp::traits::input_parameter< bool >::type doWaic(doWaicSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericVector> >::type sig(sigSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type yobs(yobsSEXP);
    rcpp_result_gen = Rcpp::wrap(checkFit(y, mcmcdraws, probit, doWaic, sig, yobs));
    return rcpp_result_gen;
END_RCPP
}
// dmixnorm0
NumericVector dmixnorm0(NumericVector& x, NumericVector& logprob, NumericVector& mu, double& sd);
RcppExport SEXP _tsbart_dmixnorm0(SEXP xSEXP, SEXP logprobSEXP, SEXP muSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type logprob(logprobSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double& >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmixnorm0(x, logprob, mu, sd));
    return rcpp_result_gen;
END_RCPP
}
// pmixnorm0
NumericVector pmixnorm0(NumericVector& x, NumericVector& logprob, NumericVector& mu, double& sd);
RcppExport SEXP _tsbart_pmixnorm0(SEXP xSEXP, SEXP logprobSEXP, SEXP muSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type logprob(logprobSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double& >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(pmixnorm0(x, logprob, mu, sd));
    return rcpp_result_gen;
END_RCPP
}
// dmixnorm
NumericVector dmixnorm(NumericVector& x, NumericVector& logprob, NumericVector& mu, NumericVector& sd);
RcppExport SEXP _tsbart_dmixnorm(SEXP xSEXP, SEXP logprobSEXP, SEXP muSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type logprob(logprobSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmixnorm(x, logprob, mu, sd));
    return rcpp_result_gen;
END_RCPP
}
// pmixnorm
NumericVector pmixnorm(NumericVector& x, NumericVector& logprob, NumericVector& mu, NumericVector& sd);
RcppExport SEXP _tsbart_pmixnorm(SEXP xSEXP, SEXP logprobSEXP, SEXP muSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type logprob(logprobSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(pmixnorm(x, logprob, mu, sd));
    return rcpp_result_gen;
END_RCPP
}
// dmixnorm0_post
NumericMatrix dmixnorm0_post(NumericVector x, List mus, NumericVector sd, List logprobs);
RcppExport SEXP _tsbart_dmixnorm0_post(SEXP xSEXP, SEXP musSEXP, SEXP sdSEXP, SEXP logprobsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type mus(musSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< List >::type logprobs(logprobsSEXP);
    rcpp_result_gen = Rcpp::wrap(dmixnorm0_post(x, mus, sd, logprobs));
    return rcpp_result_gen;
END_RCPP
}
// pmixnorm0_post
NumericMatrix pmixnorm0_post(NumericVector x, List mus, NumericVector sd, List logprobs);
RcppExport SEXP _tsbart_pmixnorm0_post(SEXP xSEXP, SEXP musSEXP, SEXP sdSEXP, SEXP logprobsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type mus(musSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< List >::type logprobs(logprobsSEXP);
    rcpp_result_gen = Rcpp::wrap(pmixnorm0_post(x, mus, sd, logprobs));
    return rcpp_result_gen;
END_RCPP
}
// dmixnorm_post
NumericMatrix dmixnorm_post(NumericVector x, List mus, List sds, List logprobs);
RcppExport SEXP _tsbart_dmixnorm_post(SEXP xSEXP, SEXP musSEXP, SEXP sdsSEXP, SEXP logprobsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type mus(musSEXP);
    Rcpp::traits::input_parameter< List >::type sds(sdsSEXP);
    Rcpp::traits::input_parameter< List >::type logprobs(logprobsSEXP);
    rcpp_result_gen = Rcpp::wrap(dmixnorm_post(x, mus, sds, logprobs));
    return rcpp_result_gen;
END_RCPP
}
// pmixnorm_post
NumericMatrix pmixnorm_post(NumericVector x, List mus, List sds, List logprobs);
RcppExport SEXP _tsbart_pmixnorm_post(SEXP xSEXP, SEXP musSEXP, SEXP sdsSEXP, SEXP logprobsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type mus(musSEXP);
    Rcpp::traits::input_parameter< List >::type sds(sdsSEXP);
    Rcpp::traits::input_parameter< List >::type logprobs(logprobsSEXP);
    rcpp_result_gen = Rcpp::wrap(pmixnorm_post(x, mus, sds, logprobs));
    return rcpp_result_gen;
END_RCPP
}
// rpgmix
NumericVector rpgmix(int n, double a, int m);
RcppExport SEXP _tsbart_rpgmix(SEXP nSEXP, SEXP aSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(rpgmix(n, a, m));
    return rcpp_result_gen;
END_RCPP
}
// rtnorm
double rtnorm(double lower, double upper, double mu, double sigma);
RcppExport SEXP _tsbart_rtnorm(SEXP lowerSEXP, SEXP upperSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(rtnorm(lower, upper, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// tsbartFit
List tsbartFit(arma::vec y, arma::vec tgt, arma::vec tpred, arma::vec x, arma::vec xpred, List xinfo_list, int nburn, int nsim, int ntree, double lambda, double sigq, double sighat, double nu, double ecross, double base_tree, double power_tree, double con_sd, bool use_fscale, CharacterVector treef_name_, bool save_trees, bool silent_mode, bool monotone, bool incr, arma::vec round_ind, double round_c2);
RcppExport SEXP _tsbart_tsbartFit(SEXP ySEXP, SEXP tgtSEXP, SEXP tpredSEXP, SEXP xSEXP, SEXP xpredSEXP, SEXP xinfo_listSEXP, SEXP nburnSEXP, SEXP nsimSEXP, SEXP ntreeSEXP, SEXP lambdaSEXP, SEXP sigqSEXP, SEXP sighatSEXP, SEXP nuSEXP, SEXP ecrossSEXP, SEXP base_treeSEXP, SEXP power_treeSEXP, SEXP con_sdSEXP, SEXP use_fscaleSEXP, SEXP treef_name_SEXP, SEXP save_treesSEXP, SEXP silent_modeSEXP, SEXP monotoneSEXP, SEXP incrSEXP, SEXP round_indSEXP, SEXP round_c2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tgt(tgtSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tpred(tpredSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type xpred(xpredSEXP);
    Rcpp::traits::input_parameter< List >::type xinfo_list(xinfo_listSEXP);
    Rcpp::traits::input_parameter< int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< int >::type nsim(nsimSEXP);
    Rcpp::traits::input_parameter< int >::type ntree(ntreeSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type sigq(sigqSEXP);
    Rcpp::traits::input_parameter< double >::type sighat(sighatSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type ecross(ecrossSEXP);
    Rcpp::traits::input_parameter< double >::type base_tree(base_treeSEXP);
    Rcpp::traits::input_parameter< double >::type power_tree(power_treeSEXP);
    Rcpp::traits::input_parameter< double >::type con_sd(con_sdSEXP);
    Rcpp::traits::input_parameter< bool >::type use_fscale(use_fscaleSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type treef_name_(treef_name_SEXP);
    Rcpp::traits::input_parameter< bool >::type save_trees(save_treesSEXP);
    Rcpp::traits::input_parameter< bool >::type silent_mode(silent_modeSEXP);
    Rcpp::traits::input_parameter< bool >::type monotone(monotoneSEXP);
    Rcpp::traits::input_parameter< bool >::type incr(incrSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type round_ind(round_indSEXP);
    Rcpp::traits::input_parameter< double >::type round_c2(round_c2SEXP);
    rcpp_result_gen = Rcpp::wrap(tsbartFit(y, tgt, tpred, x, xpred, xinfo_list, nburn, nsim, ntree, lambda, sigq, sighat, nu, ecross, base_tree, power_tree, con_sd, use_fscale, treef_name_, save_trees, silent_mode, monotone, incr, round_ind, round_c2));
    return rcpp_result_gen;
END_RCPP
}
// tsbartProbit
List tsbartProbit(arma::vec y, arma::vec yobs, arma::vec tgt, arma::vec tpred, arma::vec x, arma::vec xpred, List xinfo_list, int nburn, int nsim, double offset, int ntree, double ecross, double base_tree, double power_tree, double con_sd, bool use_fscale, CharacterVector treef_name_, bool save_trees, bool silent_mode);
RcppExport SEXP _tsbart_tsbartProbit(SEXP ySEXP, SEXP yobsSEXP, SEXP tgtSEXP, SEXP tpredSEXP, SEXP xSEXP, SEXP xpredSEXP, SEXP xinfo_listSEXP, SEXP nburnSEXP, SEXP nsimSEXP, SEXP offsetSEXP, SEXP ntreeSEXP, SEXP ecrossSEXP, SEXP base_treeSEXP, SEXP power_treeSEXP, SEXP con_sdSEXP, SEXP use_fscaleSEXP, SEXP treef_name_SEXP, SEXP save_treesSEXP, SEXP silent_modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type yobs(yobsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tgt(tgtSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tpred(tpredSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type xpred(xpredSEXP);
    Rcpp::traits::input_parameter< List >::type xinfo_list(xinfo_listSEXP);
    Rcpp::traits::input_parameter< int >::type nburn(nburnSEXP);
    Rcpp::traits::input_parameter< int >::type nsim(nsimSEXP);
    Rcpp::traits::input_parameter< double >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< int >::type ntree(ntreeSEXP);
    Rcpp::traits::input_parameter< double >::type ecross(ecrossSEXP);
    Rcpp::traits::input_parameter< double >::type base_tree(base_treeSEXP);
    Rcpp::traits::input_parameter< double >::type power_tree(power_treeSEXP);
    Rcpp::traits::input_parameter< double >::type con_sd(con_sdSEXP);
    Rcpp::traits::input_parameter< bool >::type use_fscale(use_fscaleSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type treef_name_(treef_name_SEXP);
    Rcpp::traits::input_parameter< bool >::type save_trees(save_treesSEXP);
    Rcpp::traits::input_parameter< bool >::type silent_mode(silent_modeSEXP);
    rcpp_result_gen = Rcpp::wrap(tsbartProbit(y, yobs, tgt, tpred, x, xpred, xinfo_list, nburn, nsim, offset, ntree, ecross, base_tree, power_tree, con_sd, use_fscale, treef_name_, save_trees, silent_mode));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_treesample_module();

static const R_CallMethodDef CallEntries[] = {
    {"_tsbart_do_rgig1", (DL_FUNC) &_tsbart_do_rgig1, 3},
    {"_tsbart_gig_norm", (DL_FUNC) &_tsbart_gig_norm, 3},
    {"_tsbart_checkFit", (DL_FUNC) &_tsbart_checkFit, 6},
    {"_tsbart_dmixnorm0", (DL_FUNC) &_tsbart_dmixnorm0, 4},
    {"_tsbart_pmixnorm0", (DL_FUNC) &_tsbart_pmixnorm0, 4},
    {"_tsbart_dmixnorm", (DL_FUNC) &_tsbart_dmixnorm, 4},
    {"_tsbart_pmixnorm", (DL_FUNC) &_tsbart_pmixnorm, 4},
    {"_tsbart_dmixnorm0_post", (DL_FUNC) &_tsbart_dmixnorm0_post, 4},
    {"_tsbart_pmixnorm0_post", (DL_FUNC) &_tsbart_pmixnorm0_post, 4},
    {"_tsbart_dmixnorm_post", (DL_FUNC) &_tsbart_dmixnorm_post, 4},
    {"_tsbart_pmixnorm_post", (DL_FUNC) &_tsbart_pmixnorm_post, 4},
    {"_tsbart_rpgmix", (DL_FUNC) &_tsbart_rpgmix, 3},
    {"_tsbart_rtnorm", (DL_FUNC) &_tsbart_rtnorm, 4},
    {"_tsbart_tsbartFit", (DL_FUNC) &_tsbart_tsbartFit, 25},
    {"_tsbart_tsbartProbit", (DL_FUNC) &_tsbart_tsbartProbit, 19},
    {"_rcpp_module_boot_treesample_module", (DL_FUNC) &_rcpp_module_boot_treesample_module, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_tsbart(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
