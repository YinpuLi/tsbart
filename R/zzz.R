
# Up until R 2.15.0, the require("methods") is needed but (now)
# triggers an warning from R CMD check
.onLoad <- function(libname, pkgname){
   #require("methods")  ## needed with R <= 2.15.0
   #loadRcppModules()
}


## For R 2.15.1 and later this also works. Note that calling loadModule() triggers
## a load action, so this does not have to be placed in .onLoad() or evalqOnLoad().
loadModule("treesample_module", TRUE)
# loadModule("yada", TRUE)
# loadModule("stdVector", TRUE)
#

#' your_package
#'
#' Description of your package
#'
#' @docType package
#' @import Rcpp
#' @importFrom Rcpp evalCpp
#' @useDynLib tsbart
#' @name tsbart
NULL
