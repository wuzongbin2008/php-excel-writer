/*
  +----------------------------------------------------------------------+
  | Vtiful Extension                                                     |
  +----------------------------------------------------------------------+
  | Copyright (c) 2017-2017 The Viest                                    |
  +----------------------------------------------------------------------+
  | http://www.viest.me                                                  |
  +----------------------------------------------------------------------+
  | Author: viest <dev@service.viest.me>                                 |
  +----------------------------------------------------------------------+
*/

#ifndef VTIFUL_EXCEL_H
#define VTIFUL_EXCEL_H

#include "php_excel_writer.h"
#include "xlsxwriter.h"

typedef struct {
    lxw_workbook *workbook;
    lxw_worksheet *worksheet;
} excel_resource_t;

#define V_EXCEL_HANDLE "handle"
#define V_EXCEL_FIL "fileName"
#define V_EXCEL_COF "config"
#define V_EXCEL_PAT "path"

extern zend_class_entry *vtiful_excel_ce;

excel_resource_t * zval_get_resource(zval *handle);

VTIFUL_STARTUP_FUNCTION(excel);

#endif
