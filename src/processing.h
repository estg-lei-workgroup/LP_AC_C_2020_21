/*
 * Created by Micael Dias on 26/12/20.
 * Edited by Hugo Carvalho on 27/12/20.
 */

#ifndef _PROCESSING_H_
#define _PROCESSING_H_

#include "irs.h"
#include "error.h"
#include "seg_social.h"

typedef struct
{
	char* func_code;
	int full_days;
	int half_days;
	int weekend_days;
	int absent_days;
} s_paysheet;

typedef struct
{
	s_paysheet* paysheet;
	int month;
	int used;
	int max_capacity;
} s_sheet;

/** Allocates memory for s_sheet */
s_sheet* h_processing_alloc();

/** Imports a file sheet from a given path */
s_error* h_processing_import(s_sheet* sheet, const char* path);

/** Exports a file sheet from s_sheet */
s_error* h_processing_export_csv(s_sheet* sheet, const char* path);

/** Comment */
s_error* h_processing(s_sheet* sheet, s_arr_irs irs_array, s_arr_seg_social ss_array);

#endif //_PROCESSING_H_