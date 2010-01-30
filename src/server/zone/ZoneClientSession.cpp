/*
 *	server/zone/ZoneClientSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "ZoneClientSession.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/ZoneServer.h"

/*
 *	ZoneClientSessionStub
 */

ZoneClientSession::ZoneClientSession(Socket* sock, SocketAddress* addr) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new ZoneClientSessionImplementation(sock, addr);
	_impl->_setStub(this);
}

ZoneClientSession::ZoneClientSession(DummyConstructorParameter* param) : ManagedObject(param) {
}

ZoneClientSession::~ZoneClientSession() {
}


void ZoneClientSession::disconnect() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->disconnect();
}

void ZoneClientSession::disconnect(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->disconnect(doLock);
}

void ZoneClientSession::sendMessage(BasePacket* msg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->sendMessage(msg);
}

void ZoneClientSession::balancePacketCheckupTime() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->balancePacketCheckupTime();
}

void ZoneClientSession::resetPacketCheckupTime() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->resetPacketCheckupTime();
}

void ZoneClientSession::closeConnection(bool lockPlayer, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addBooleanParameter(lockPlayer);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->closeConnection(lockPlayer, doLock);
}

void ZoneClientSession::lock(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->lock(doLock);
}

void ZoneClientSession::unlock(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->unlock(doLock);
}

void ZoneClientSession::_acquire() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->acquire();
}

void ZoneClientSession::_release() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->release();
}

String ZoneClientSession::getAddress() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		method.executeWithAsciiReturn(_return_getAddress);
		return _return_getAddress;
	} else
		return ((ZoneClientSessionImplementation*) _impl)->getAddress();
}

void ZoneClientSession::setPlayer(SceneObject* playerCreature) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(playerCreature);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->setPlayer(playerCreature);
}

void ZoneClientSession::setSessionKey(unsigned int key) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addUnsignedIntParameter(key);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->setSessionKey(key);
}

void ZoneClientSession::setAccountID(unsigned int id) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addUnsignedIntParameter(id);

		method.executeWithVoidReturn();
	} else
		((ZoneClientSessionImplementation*) _impl)->setAccountID(id);
}

SceneObject* ZoneClientSession::getPlayer() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneClientSessionImplementation*) _impl)->getPlayer();
}

unsigned int ZoneClientSession::getSessionKey() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((ZoneClientSessionImplementation*) _impl)->getSessionKey();
}

unsigned int ZoneClientSession::getAccountID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((ZoneClientSessionImplementation*) _impl)->getAccountID();
}

/*
 *	ZoneClientSessionImplementation
 */

ZoneClientSessionImplementation::ZoneClientSessionImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

ZoneClientSessionImplementation::~ZoneClientSessionImplementation() {
}


void ZoneClientSessionImplementation::finalize() {
}

void ZoneClientSessionImplementation::_initializeImplementation() {
	_setClassHelper(ZoneClientSessionHelper::instance());

	_serializationHelperMethod();
}

void ZoneClientSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ZoneClientSession*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ZoneClientSessionImplementation::_getStub() {
	return _this;
}

ZoneClientSessionImplementation::operator const ZoneClientSession*() {
	return _this;
}

void ZoneClientSessionImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("ZoneClientSession");

	addSerializableVariable("player", &player);
	addSerializableVariable("sessionKey", &sessionKey);
	addSerializableVariable("accountID", &accountID);
	addSerializableVariable("disconnecting", &disconnecting);
}

void ZoneClientSessionImplementation::balancePacketCheckupTime() {
	// server/zone/ZoneClientSession.idl(72):  BaseClientProxy.balancePacketCheckupTime();
	BaseClientProxy::balancePacketCheckupTime();
}

void ZoneClientSessionImplementation::resetPacketCheckupTime() {
	// server/zone/ZoneClientSession.idl(76):  BaseClientProxy.resetPacketCheckupTime();
	BaseClientProxy::resetPacketCheckupTime();
}

String ZoneClientSessionImplementation::getAddress() {
	// server/zone/ZoneClientSession.idl(91):  return BaseClientProxy.getAddress();
	return BaseClientProxy::getAddress();
}

void ZoneClientSessionImplementation::setPlayer(SceneObject* playerCreature) {
	// server/zone/ZoneClientSession.idl(96):  player 
	if (playerCreature != player){
	// server/zone/ZoneClientSession.idl(97):  
	if (playerCreature == NULL && player != NULL){
	// server/zone/ZoneClientSession.idl(98):  ZoneServer zoneServer = player.getZoneServer();
	ZoneServer* zoneServer = player->getZoneServer();
	// server/zone/ZoneClientSession.idl(100):  zoneServer.decreaseOnlinePlayers();
	zoneServer->decreaseOnlinePlayers();
}

	else 	// server/zone/ZoneClientSession.idl(101):  }
	if (playerCreature != player){
	// server/zone/ZoneClientSession.idl(102):  ZoneServer zoneServer = playerCreature.getZoneServer();
	ZoneServer* zoneServer = playerCreature->getZoneServer();
	// server/zone/ZoneClientSession.idl(104):  zoneServer.increaseOnlinePlayers();
	zoneServer->increaseOnlinePlayers();
}
}
	// server/zone/ZoneClientSession.idl(108):  = playerCreature;
	player = playerCreature;
}

void ZoneClientSessionImplementation::setSessionKey(unsigned int key) {
	// server/zone/ZoneClientSession.idl(112):  sessionKey = key;
	sessionKey = key;
}

void ZoneClientSessionImplementation::setAccountID(unsigned int id) {
	// server/zone/ZoneClientSession.idl(116):  accountID = id;
	accountID = id;
}

SceneObject* ZoneClientSessionImplementation::getPlayer() {
	// server/zone/ZoneClientSession.idl(120):  return player;
	return player;
}

unsigned int ZoneClientSessionImplementation::getSessionKey() {
	// server/zone/ZoneClientSession.idl(124):  return sessionKey;
	return sessionKey;
}

unsigned int ZoneClientSessionImplementation::getAccountID() {
	// server/zone/ZoneClientSession.idl(128):  return accountID;
	return accountID;
}

/*
 *	ZoneClientSessionAdapter
 */

ZoneClientSessionAdapter::ZoneClientSessionAdapter(ZoneClientSessionImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ZoneClientSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		disconnect();
		break;
	case 7:
		disconnect(inv->getBooleanParameter());
		break;
	case 8:
		sendMessage((BasePacket*) inv->getObjectParameter());
		break;
	case 9:
		balancePacketCheckupTime();
		break;
	case 10:
		resetPacketCheckupTime();
		break;
	case 11:
		closeConnection(inv->getBooleanParameter(), inv->getBooleanParameter());
		break;
	case 12:
		lock(inv->getBooleanParameter());
		break;
	case 13:
		unlock(inv->getBooleanParameter());
		break;
	case 14:
		acquire();
		break;
	case 15:
		release();
		break;
	case 16:
		resp->insertAscii(getAddress());
		break;
	case 17:
		setPlayer((SceneObject*) inv->getObjectParameter());
		break;
	case 18:
		setSessionKey(inv->getUnsignedIntParameter());
		break;
	case 19:
		setAccountID(inv->getUnsignedIntParameter());
		break;
	case 20:
		resp->insertLong(getPlayer()->_getObjectID());
		break;
	case 21:
		resp->insertInt(getSessionKey());
		break;
	case 22:
		resp->insertInt(getAccountID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneClientSessionAdapter::disconnect() {
	((ZoneClientSessionImplementation*) impl)->disconnect();
}

void ZoneClientSessionAdapter::disconnect(bool doLock) {
	((ZoneClientSessionImplementation*) impl)->disconnect(doLock);
}

void ZoneClientSessionAdapter::sendMessage(BasePacket* msg) {
	((ZoneClientSessionImplementation*) impl)->sendMessage(msg);
}

void ZoneClientSessionAdapter::balancePacketCheckupTime() {
	((ZoneClientSessionImplementation*) impl)->balancePacketCheckupTime();
}

void ZoneClientSessionAdapter::resetPacketCheckupTime() {
	((ZoneClientSessionImplementation*) impl)->resetPacketCheckupTime();
}

void ZoneClientSessionAdapter::closeConnection(bool lockPlayer, bool doLock) {
	((ZoneClientSessionImplementation*) impl)->closeConnection(lockPlayer, doLock);
}

void ZoneClientSessionAdapter::lock(bool doLock) {
	((ZoneClientSessionImplementation*) impl)->lock(doLock);
}

void ZoneClientSessionAdapter::unlock(bool doLock) {
	((ZoneClientSessionImplementation*) impl)->unlock(doLock);
}

void ZoneClientSessionAdapter::acquire() {
	((ZoneClientSessionImplementation*) impl)->acquire();
}

void ZoneClientSessionAdapter::release() {
	((ZoneClientSessionImplementation*) impl)->release();
}

String ZoneClientSessionAdapter::getAddress() {
	return ((ZoneClientSessionImplementation*) impl)->getAddress();
}

void ZoneClientSessionAdapter::setPlayer(SceneObject* playerCreature) {
	((ZoneClientSessionImplementation*) impl)->setPlayer(playerCreature);
}

void ZoneClientSessionAdapter::setSessionKey(unsigned int key) {
	((ZoneClientSessionImplementation*) impl)->setSessionKey(key);
}

void ZoneClientSessionAdapter::setAccountID(unsigned int id) {
	((ZoneClientSessionImplementation*) impl)->setAccountID(id);
}

SceneObject* ZoneClientSessionAdapter::getPlayer() {
	return ((ZoneClientSessionImplementation*) impl)->getPlayer();
}

unsigned int ZoneClientSessionAdapter::getSessionKey() {
	return ((ZoneClientSessionImplementation*) impl)->getSessionKey();
}

unsigned int ZoneClientSessionAdapter::getAccountID() {
	return ((ZoneClientSessionImplementation*) impl)->getAccountID();
}

/*
 *	ZoneClientSessionHelper
 */

ZoneClientSessionHelper* ZoneClientSessionHelper::staticInitializer = ZoneClientSessionHelper::instance();

ZoneClientSessionHelper::ZoneClientSessionHelper() {
	className = "ZoneClientSession";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ZoneClientSessionHelper::finalizeHelper() {
	ZoneClientSessionHelper::finalize();
}

DistributedObject* ZoneClientSessionHelper::instantiateObject() {
	return new ZoneClientSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* ZoneClientSessionHelper::instantiateServant() {
	return new ZoneClientSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ZoneClientSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ZoneClientSessionAdapter((ZoneClientSessionImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

