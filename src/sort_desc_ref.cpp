#include <Rcpp.h>

// [[Rcpp::export]]
void sort_desc_ref(Rcpp::NumericVector& the_vector) { // pass in a reference to the vector with the &
  // modify in place by passing by reference to the original vector in R
  the_vector.sort(true); // true = sort in descending order
}
