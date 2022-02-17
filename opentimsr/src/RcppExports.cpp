// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "opentimsr_types.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// setup_bruker_so
void setup_bruker_so(const Rcpp::String& path);
RcppExport SEXP _opentimsr_setup_bruker_so(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::String& >::type path(pathSEXP);
    setup_bruker_so(path);
    return R_NilValue;
END_RCPP
}
// tdf_open
Rcpp::XPtr<TimsDataHandle> tdf_open(const Rcpp::String& path_d, const Rcpp::List& sql_res);
RcppExport SEXP _opentimsr_tdf_open(SEXP path_dSEXP, SEXP sql_resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::String& >::type path_d(path_dSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sql_res(sql_resSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_open(path_d, sql_res));
    return rcpp_result_gen;
END_RCPP
}
// tdf_close
void tdf_close(Rcpp::XPtr<TimsDataHandle> tdf);
RcppExport SEXP _opentimsr_tdf_close(SEXP tdfSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    tdf_close(tdf);
    return R_NilValue;
END_RCPP
}
// tdf_min_frame_id
uint32_t tdf_min_frame_id(Rcpp::XPtr<TimsDataHandle> tdf);
RcppExport SEXP _opentimsr_tdf_min_frame_id(SEXP tdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_min_frame_id(tdf));
    return rcpp_result_gen;
END_RCPP
}
// tdf_max_frame_id
uint32_t tdf_max_frame_id(Rcpp::XPtr<TimsDataHandle> tdf);
RcppExport SEXP _opentimsr_tdf_max_frame_id(SEXP tdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_max_frame_id(tdf));
    return rcpp_result_gen;
END_RCPP
}
// tdf_no_peaks_total
size_t tdf_no_peaks_total(Rcpp::XPtr<TimsDataHandle> tdf);
RcppExport SEXP _opentimsr_tdf_no_peaks_total(SEXP tdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_no_peaks_total(tdf));
    return rcpp_result_gen;
END_RCPP
}
// tdf_get_range
Rcpp::DataFrame tdf_get_range(Rcpp::XPtr<TimsDataHandle> tdf, size_t start, size_t end, int32_t step);
RcppExport SEXP _opentimsr_tdf_get_range(SEXP tdfSEXP, SEXP startSEXP, SEXP endSEXP, SEXP stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    Rcpp::traits::input_parameter< size_t >::type start(startSEXP);
    Rcpp::traits::input_parameter< size_t >::type end(endSEXP);
    Rcpp::traits::input_parameter< int32_t >::type step(stepSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_get_range(tdf, start, end, step));
    return rcpp_result_gen;
END_RCPP
}
// tdf_get_indexes
Rcpp::DataFrame tdf_get_indexes(Rcpp::XPtr<TimsDataHandle> tdf, Rcpp::IntegerVector indexes);
RcppExport SEXP _opentimsr_tdf_get_indexes(SEXP tdfSEXP, SEXP indexesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indexes(indexesSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_get_indexes(tdf, indexes));
    return rcpp_result_gen;
END_RCPP
}
// tdf_get_range_noend
Rcpp::DataFrame tdf_get_range_noend(Rcpp::XPtr<TimsDataHandle> tdf, size_t start, int32_t step);
RcppExport SEXP _opentimsr_tdf_get_range_noend(SEXP tdfSEXP, SEXP startSEXP, SEXP stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    Rcpp::traits::input_parameter< size_t >::type start(startSEXP);
    Rcpp::traits::input_parameter< int32_t >::type step(stepSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_get_range_noend(tdf, start, step));
    return rcpp_result_gen;
END_RCPP
}
// tdf_extract_frames
Rcpp::DataFrame tdf_extract_frames(const Rcpp::XPtr<TimsDataHandle> tdf, const Rcpp::IntegerVector indexes, const bool get_frames, const bool get_scans, const bool get_tofs, const bool get_intensities, const bool get_mzs, const bool get_inv_ion_mobilities, const bool get_retention_times);
RcppExport SEXP _opentimsr_tdf_extract_frames(SEXP tdfSEXP, SEXP indexesSEXP, SEXP get_framesSEXP, SEXP get_scansSEXP, SEXP get_tofsSEXP, SEXP get_intensitiesSEXP, SEXP get_mzsSEXP, SEXP get_inv_ion_mobilitiesSEXP, SEXP get_retention_timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector >::type indexes(indexesSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_frames(get_framesSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_scans(get_scansSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_tofs(get_tofsSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_intensities(get_intensitiesSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_mzs(get_mzsSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_inv_ion_mobilities(get_inv_ion_mobilitiesSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_retention_times(get_retention_timesSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_extract_frames(tdf, indexes, get_frames, get_scans, get_tofs, get_intensities, get_mzs, get_inv_ion_mobilities, get_retention_times));
    return rcpp_result_gen;
END_RCPP
}
// tdf_extract_frames_slice
Rcpp::DataFrame tdf_extract_frames_slice(const Rcpp::XPtr<TimsDataHandle> tdf, const size_t start, const size_t end, const int32_t step, const bool get_frames, const bool get_scans, const bool get_tofs, const bool get_intensities, const bool get_mzs, const bool get_inv_ion_mobilities, const bool get_retention_times);
RcppExport SEXP _opentimsr_tdf_extract_frames_slice(SEXP tdfSEXP, SEXP startSEXP, SEXP endSEXP, SEXP stepSEXP, SEXP get_framesSEXP, SEXP get_scansSEXP, SEXP get_tofsSEXP, SEXP get_intensitiesSEXP, SEXP get_mzsSEXP, SEXP get_inv_ion_mobilitiesSEXP, SEXP get_retention_timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::XPtr<TimsDataHandle> >::type tdf(tdfSEXP);
    Rcpp::traits::input_parameter< const size_t >::type start(startSEXP);
    Rcpp::traits::input_parameter< const size_t >::type end(endSEXP);
    Rcpp::traits::input_parameter< const int32_t >::type step(stepSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_frames(get_framesSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_scans(get_scansSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_tofs(get_tofsSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_intensities(get_intensitiesSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_mzs(get_mzsSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_inv_ion_mobilities(get_inv_ion_mobilitiesSEXP);
    Rcpp::traits::input_parameter< const bool >::type get_retention_times(get_retention_timesSEXP);
    rcpp_result_gen = Rcpp::wrap(tdf_extract_frames_slice(tdf, start, end, step, get_frames, get_scans, get_tofs, get_intensities, get_mzs, get_inv_ion_mobilities, get_retention_times));
    return rcpp_result_gen;
END_RCPP
}
// tdf_set_num_threads
void tdf_set_num_threads(const size_t n);
RcppExport SEXP _opentimsr_tdf_set_num_threads(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const size_t >::type n(nSEXP);
    tdf_set_num_threads(n);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_opentimsr_setup_bruker_so", (DL_FUNC) &_opentimsr_setup_bruker_so, 1},
    {"_opentimsr_tdf_open", (DL_FUNC) &_opentimsr_tdf_open, 2},
    {"_opentimsr_tdf_close", (DL_FUNC) &_opentimsr_tdf_close, 1},
    {"_opentimsr_tdf_min_frame_id", (DL_FUNC) &_opentimsr_tdf_min_frame_id, 1},
    {"_opentimsr_tdf_max_frame_id", (DL_FUNC) &_opentimsr_tdf_max_frame_id, 1},
    {"_opentimsr_tdf_no_peaks_total", (DL_FUNC) &_opentimsr_tdf_no_peaks_total, 1},
    {"_opentimsr_tdf_get_range", (DL_FUNC) &_opentimsr_tdf_get_range, 4},
    {"_opentimsr_tdf_get_indexes", (DL_FUNC) &_opentimsr_tdf_get_indexes, 2},
    {"_opentimsr_tdf_get_range_noend", (DL_FUNC) &_opentimsr_tdf_get_range_noend, 3},
    {"_opentimsr_tdf_extract_frames", (DL_FUNC) &_opentimsr_tdf_extract_frames, 9},
    {"_opentimsr_tdf_extract_frames_slice", (DL_FUNC) &_opentimsr_tdf_extract_frames_slice, 11},
    {"_opentimsr_tdf_set_num_threads", (DL_FUNC) &_opentimsr_tdf_set_num_threads, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_opentimsr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
