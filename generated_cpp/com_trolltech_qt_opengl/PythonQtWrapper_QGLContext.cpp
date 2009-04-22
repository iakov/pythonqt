#include "PythonQtWrapper_QGLContext.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qcolor.h>
#include <qgl.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>

bool  PythonQtShell_QGLContext::chooseContext(const QGLContext*  shareContext)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "chooseContext");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGLContext::staticMetaObject,
      "chooseContext(QGLContext*,const QGLContext* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&shareContext};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGLContext::chooseContext(shareContext);
}
bool  PythonQtShell_QGLContext::create(const QGLContext*  shareContext)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "create");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGLContext::staticMetaObject,
      "create(QGLContext*,const QGLContext* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&shareContext};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QGLContext::create(shareContext);
}
void PythonQtShell_QGLContext::doneCurrent()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "doneCurrent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGLContext::staticMetaObject,
      "doneCurrent(QGLContext*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLContext::doneCurrent();
}
void PythonQtShell_QGLContext::makeCurrent()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "makeCurrent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGLContext::staticMetaObject,
      "makeCurrent(QGLContext*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLContext::makeCurrent();
}
void PythonQtShell_QGLContext::swapBuffers() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "swapBuffers");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QGLContext::staticMetaObject,
      "swapBuffers(QGLContext*)");
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QGLContext::swapBuffers();
}
QGLContext* PythonQtWrapper_QGLContext::new_QGLContext(const QGLFormat&  format)
{ 
return new PythonQtShell_QGLContext(format); }

QGLContext* PythonQtWrapper_QGLContext::new_QGLContext(const QGLFormat&  format, QPaintDevice*  device)
{ 
return new PythonQtShell_QGLContext(format, device); }

void PythonQtWrapper_QGLContext::setFormat(QGLContext* theWrappedObject, const QGLFormat&  format)
{
 theWrappedObject->setFormat(format);
}

bool  PythonQtWrapper_QGLContext::isValid(QGLContext* theWrappedObject) const
{
return  theWrappedObject->isValid();
}

int  PythonQtWrapper_QGLContext::static_QGLContext_textureCacheLimit()
{
return QGLContext::textureCacheLimit();
}

void PythonQtWrapper_QGLContext::drawTexture(QGLContext* theWrappedObject, const QPointF&  point, unsigned int  textureId, unsigned int  textureTarget)
{
 theWrappedObject->drawTexture(point, textureId, textureTarget);
}

unsigned int  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QString&  fileName)
{
return  theWrappedObject->bindTexture(fileName);
}

QColor  PythonQtWrapper_QGLContext::overlayTransparentColor(QGLContext* theWrappedObject) const
{
return  theWrappedObject->overlayTransparentColor();
}

QGLFormat  PythonQtWrapper_QGLContext::format(QGLContext* theWrappedObject) const
{
return  theWrappedObject->format();
}

unsigned int  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QImage&  image, unsigned int  target, int  format)
{
return  theWrappedObject->bindTexture(image, target, format);
}

const QGLContext*  PythonQtWrapper_QGLContext::static_QGLContext_currentContext()
{
return QGLContext::currentContext();
}

void PythonQtWrapper_QGLContext::doneCurrent(QGLContext* theWrappedObject)
{
 ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_doneCurrent();
}

unsigned int  PythonQtWrapper_QGLContext::bindTexture(QGLContext* theWrappedObject, const QPixmap&  pixmap, unsigned int  target, int  format)
{
return  theWrappedObject->bindTexture(pixmap, target, format);
}

void PythonQtWrapper_QGLContext::makeCurrent(QGLContext* theWrappedObject)
{
 ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_makeCurrent();
}

void PythonQtWrapper_QGLContext::reset(QGLContext* theWrappedObject)
{
 theWrappedObject->reset();
}

bool  PythonQtWrapper_QGLContext::chooseContext(QGLContext* theWrappedObject, const QGLContext*  shareContext)
{
return  ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_chooseContext(shareContext);
}

void PythonQtWrapper_QGLContext::swapBuffers(QGLContext* theWrappedObject) const
{
 ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_swapBuffers();
}

bool  PythonQtWrapper_QGLContext::isSharing(QGLContext* theWrappedObject) const
{
return  theWrappedObject->isSharing();
}

void PythonQtWrapper_QGLContext::deleteTexture(QGLContext* theWrappedObject, unsigned int  tx_id)
{
 theWrappedObject->deleteTexture(tx_id);
}

bool  PythonQtWrapper_QGLContext::create(QGLContext* theWrappedObject, const QGLContext*  shareContext)
{
return  ((PythonQtPublicPromoter_QGLContext*)theWrappedObject)->promoted_create(shareContext);
}

QPaintDevice*  PythonQtWrapper_QGLContext::device(QGLContext* theWrappedObject) const
{
return  theWrappedObject->device();
}

void PythonQtWrapper_QGLContext::drawTexture(QGLContext* theWrappedObject, const QRectF&  target, unsigned int  textureId, unsigned int  textureTarget)
{
 theWrappedObject->drawTexture(target, textureId, textureTarget);
}

void PythonQtWrapper_QGLContext::static_QGLContext_setTextureCacheLimit(int  size)
{
QGLContext::setTextureCacheLimit(size);
}

QGLFormat  PythonQtWrapper_QGLContext::requestedFormat(QGLContext* theWrappedObject) const
{
return  theWrappedObject->requestedFormat();
}
