/*
 * Theme Explorer
 * Copyright (c) 2012 Martin Mitas
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef TE_COMPAT_H
#define TE_COMPAT_H


#include <windows.h>
#include <commctrl.h>
#include <uxtheme.h>


#ifndef BS_SPLITBUTTON
    #define BS_SPLITBUTTON      0x0000000CL
#endif

#ifndef TMT_DIBDATA
    #define TMT_DIBDATA         2
#endif

#ifndef TMT_GLYPHDIBDATA
    #define TMT_GLYPHDIBDATA    8
#endif

#ifndef GBF_DIRECT
    #define GBF_DIRECT          0x00000001
#endif

#ifndef GBF_COPY
    #define GBF_COPY            0x00000002
#endif


#endif  /* TE_COMPAT_H */
