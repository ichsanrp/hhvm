/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2013 Facebook, Inc. (http://www.facebook.com)     |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef ZEND_ERRORS_H
#define ZEND_ERRORS_H

#include "hphp/runtime/base/runtime-error.h"

#define E_ERROR             static_cast<int>(HPHP::ErrorConstants::ErrorModes::ERROR)
#define E_WARNING           static_cast<int>(HPHP::ErrorConstants::ErrorModes::WARNING)
#define E_PARSE             static_cast<int>(HPHP::ErrorConstants::ErrorModes::PARSE)
#define E_NOTICE            static_cast<int>(HPHP::ErrorConstants::ErrorModes::NOTICE)
#define E_CORE_ERROR        static_cast<int>(HPHP::ErrorConstants::ErrorModes::CORE_ERROR)
#define E_CORE_WARNING      static_cast<int>(HPHP::ErrorConstants::ErrorModes::CORE_WARNING)
#define E_COMPILE_ERROR     static_cast<int>(HPHP::ErrorConstants::ErrorModes::COMPILE_ERROR)
#define E_COMPILE_WARNING   static_cast<int>(HPHP::ErrorConstants::ErrorModes::COMPILE_WARNING)
#define E_USER_ERROR        static_cast<int>(HPHP::ErrorConstants::ErrorModes::USER_ERROR)
#define E_USER_WARNING      static_cast<int>(HPHP::ErrorConstants::ErrorModes::USER_WARNING)
#define E_USER_NOTICE       static_cast<int>(HPHP::ErrorConstants::ErrorModes::USER_NOTICE)
#define E_STRICT            static_cast<int>(HPHP::ErrorConstants::ErrorModes::STRICT)
#define E_RECOVERABLE_ERROR static_cast<int>(HPHP::ErrorConstants::ErrorModes::RECOVERABLE_ERROR)
#define E_DEPRECATED        static_cast<int>(HPHP::ErrorConstants::ErrorModes::DEPRECATED)
#define E_USER_DEPRECATED   static_cast<int>(HPHP::ErrorConstants::ErrorModes::USER_DEPRECATED)

#define E_ALL (E_ERROR | E_WARNING | E_PARSE | E_NOTICE | E_CORE_ERROR | E_CORE_WARNING | E_COMPILE_ERROR | E_COMPILE_WARNING | E_USER_ERROR | E_USER_WARNING | E_USER_NOTICE | E_RECOVERABLE_ERROR | E_DEPRECATED | E_USER_DEPRECATED | E_STRICT)
#define E_CORE (E_CORE_ERROR | E_CORE_WARNING)

#endif /* ZEND_ERRORS_H */
