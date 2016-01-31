# Serna Free source code

Contains full source code of Serna Free WYSIWYG XML editor, which 
uses XSLT and XSL-FO for on-screen rendering. 

** This code is not maintained for quite some time** (only commercial branch is 
currently supported by the company which acquired commerical rights). However,
it shouldn't be difficult to ressurect it for those interested. It requires a 
number of 3rd-party packages to build (such as qt, hunspell etc), but they are
all free software and available elsewhere.

# Contents

Source code contains several frameworks with potential for re-use in other
projects:

* sfworks/grove:  Optimized implementation of in-memory XML document model,
with full support of entity and entity synchronization, tree modification 
notifications, and extensions (such as redlining), XInclude, etc.

* sfworks/xpath: implementation of dynamic/incremental XPath, with support of
partial expression re-evaluation on source document changes

* sfworks/xslt: implementation of dynamic/incremental XSLT, which optimally 
reacts to localized changes in the source tree (takes milliseconds for most
changes). This makes using XSLT feasible for using in applications such as 
WYSIWYG editor without input delays

* sfworks/catmgr: implementation of XML catalog manager

* sfworks/groveeditor: grove tree editing framework with support of undo/redo,
redlining and change replication of entity references

* sfworks/formatter: Implementation of incremental XSL-FO formatter 
(implements subset of XSL-FO plus some editor-specific extensions)

* sfworks/common: Collection of useful C++ utility classes

# Documentation

Documentation in DocBook and DITA formats are in serna/dist/doc. Includes
User's Guide, Developer's Guide, FAQ, Installation Guide, quick reference card,
C++ and Python plugin developers/API guide.

# Licensing

This is a GPL'ed free software, with GPL license terms relaxed for compatibility
with differently licensed open-source software (see GPL_EXCEPTION.txt)

# Other

No warranties of any kind, use this at your own risk. 

Please contact Paul Antonov <apg@metta.cc> for questions regarding using 
of this software or its parts. 