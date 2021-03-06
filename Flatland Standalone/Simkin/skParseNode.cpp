/*
  Copyright 1996-2003
  Simon Whiteside

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

  * $Id: skParseNode.cpp,v 1.7 2003/04/04 17:04:25 simkin_cvs Exp $
  */
#include "skParseNode.h"
#ifdef USE_BYTECODES
#ifdef _DEBUG
#include "skTracer.h"
#endif
#ifdef _DEBUG_BYTECODES
static const Char * g_ByteCodeNames[]={
  skSTR("NullStat"),      
  skSTR("StatList"),
  skSTR("Switch"),
  skSTR("If"),
  skSTR("Return"),
  skSTR("While"),
  skSTR("ForEach"),
  skSTR("QualifierIndex"),
  skSTR("For"),
  skSTR("Assign"),
  skSTR("Method"),
  skSTR("IdList"),
  skSTR("IdWithMethod"),
  skSTR("Id"),
  skSTR("ExprList"),
  skSTR("String"),
  skSTR("Int"),
  skSTR("IntInline"),
  skSTR("Char"),
#ifdef USE_FLOATING_POINT
  skSTR("Float"),
#endif
  skSTR("Op"),
  skSTR("CaseList")
};
#endif
#endif
