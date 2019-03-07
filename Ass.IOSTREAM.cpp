#include <iostream>

Lines beginning with a hash sign (#) are directives for the preprocessor. They are not regular code lines with expressions but indications for the compiler’s preprocessor. In this case the directive #include <iostream> tells the preprocessor to include the io stream standard file. This specific file (iostream) includes the declarations of the basic standard input-output library in C++, and it is included because its functionality is going to be used later in the program.



Lines beginning with a hash sign (#) are directives read and interpreted by what is known as the preprocessor. They are special lines interpreted before the compilation of the program itself begins. In this case, the directive #include <iostream>, instructs the preprocessor to include a section of standard C++ code, known as header iostream, that allows to perform standard input and output operations, such as writing the output of this program (Hello World) to the screen. 







00001 // Standard iostream objects -*- C++ -*-

00002 

00003 // Copyright (C) 1997, 1998, 1999, 2001, 2002 Free Software Foundation, Inc.

00004 //

00005 // This file is part of the GNU ISO C++ Library.  This library is free

00006 // software; you can redistribute it and/or modify it under the

00007 // terms of the GNU General Public License as published by the

00008 // Free Software Foundation; either version 2, or (at your option)

00009 // any later version.

00010 

00011 // This library is distributed in the hope that it will be useful,

00012 // but WITHOUT ANY WARRANTY; without even the implied warranty of

00013 // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the

00014 // GNU General Public License for more details.

00015 

00016 // You should have received a copy of the GNU General Public License along

00017 // with this library; see the file COPYING.  If not, write to the Free

00018 // Software Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,

00019 // USA.

00020 

00021 // As a special exception, you may use this file as part of a free software

00022 // library without restriction.  Specifically, if other files instantiate

00023 // templates or use macros or inline functions from this file, or you compile

00024 // this file and link it with other files to produce an executable, this

00025 // file does not by itself cause the resulting executable to be covered by

00026 // the GNU General Public License.  This exception does not however

00027 // invalidate any other reasons why the executable file might be covered by

00028 // the GNU General Public License.

00029 

00030 //

00031 // ISO C++ 14882: 27.3  Standard iostream objects

00032 //

00033 

00034 /** @file iostream
00035  *  This is a Standard C++ Library header.  You should @c #include this header
00036  *  in your programs, rather than any of the "st[dl]_*.h" implementation files.
00037  */

00038 

00039 #ifndef _GLIBCXX_IOSTREAM

00040 #define _GLIBCXX_IOSTREAM 1

00041 

00042 #pragma GCC system_header

00043 

00044 #include <bits/c++config.h>

00045 #include <ostream>

00046 #include <istream>

00047 

00048 namespace std 

00049 {

00050   /**
00051    *  @name Standard Stream Objects
00052    *
00053    *  The &lt;iostream&gt; header declares the eight <em>standard stream
00054    *  objects</em>.  For other declarations, see
00055    *  http://gcc.gnu.org/onlinedocs/libstdc++/27_io/howto.html#10 and the
00056    *  @link s27_2_iosfwd I/O forward declarations @endlink
00057    *
00058    *  They are required by default to cooperate with the global C library's
00059    *  @c FILE streams, and to be available during program startup and
00060    *  termination.  For more information, see the HOWTO linked to above.
00061   */

00062   //@{

00063   extern istream cin;       ///< Linked to standard input

00064   extern ostream cout;      ///< Linked to standard output

00065   extern ostream cerr;      ///< Linked to standard error (unbuffered)

00066   extern ostream clog;      ///< Linked to standard error (buffered)

00067 

00068 #ifdef _GLIBCXX_USE_WCHAR_T

00069   extern wistream wcin;     ///< Linked to standard input

00070   extern wostream wcout;    ///< Linked to standard output

00071   extern wostream wcerr;    ///< Linked to standard error (unbuffered)

00072   extern wostream wclog;    ///< Linked to standard error (buffered)

00073 #endif

00074   //@}

00075 

00076   // For construction of filebuffers for cout, cin, cerr, clog et. al.

00077   static ios_base::Init __ioinit;

00078 } // namespace std

00079 

00080 #endif /* _GLIBCXX_IOSTREAM */

