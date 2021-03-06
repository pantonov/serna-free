// 
// Copyright(c) 2009 Syntext, Inc. All Rights Reserved.
// Contact: info@syntext.com, http://www.syntext.com
// 
// This file is part of Syntext Serna XML Editor.
// 
// COMMERCIAL USAGE
// Licensees holding valid Syntext Serna commercial licenses may use this file
// in accordance with the Syntext Serna Commercial License Agreement provided
// with the software, or, alternatively, in accorance with the terms contained
// in a written agreement between you and Syntext, Inc.
// 
// GNU GENERAL PUBLIC LICENSE USAGE
// Alternatively, this file may be used under the terms of the GNU General 
// Public License versions 2.0 or 3.0 as published by the Free Software 
// Foundation and appearing in the file LICENSE.GPL included in the packaging 
// of this file. In addition, as a special exception, Syntext, Inc. gives you
// certain additional rights, which are described in the Syntext, Inc. GPL 
// Exception for Syntext Serna Free Edition, included in the file 
// GPL_EXCEPTION.txt in this package.
// 
// You should have received a copy of appropriate licenses along with this 
// package. If not, see <http://www.syntext.com/legal/>. If you are unsure
// which license is appropriate for your use, please contact the sales 
// department at sales@syntext.com.
// 
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
// 
// Copyright (c) 2008 Syntext Inc.
//
// This is a copyrighted commercial software.
// Please see COPYRIGHT file for details.

/** \file
 */

#ifndef AX_SERNA_H_
#define AX_SERNA_H_

#include "core/core_defs.h"
#include "common/common_defs.h"
#include <QObject>

class CORE_EXPIMP AxSernaBase : public QObject {
public:
    virtual bool isStarted() const = 0;
    virtual bool isStartedByCOM() const = 0;
    virtual bool isServer() const = 0;
    virtual void startServer() = 0;

    static bool needMain();
    static int main();

protected:
    AxSernaBase(QObject* parent = 0) : QObject(parent) {}
    virtual ~AxSernaBase() {}
private:
    DEFAULT_COPY_CTOR_DECL(AxSernaBase)
    DEFAULT_ASSIGN_OP_DECL(AxSernaBase)
};

class QWidget;

CORE_EXPIMP AxSernaBase& ax_serna();

#endif // Q_AX_SERNA_H_
