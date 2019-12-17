#ifndef _ID_H
#define _ID_H

#include <map>
#include <string_view>
#include "common/src/typedefs.hpp"

enum class Id : Byte
{
	servMsg,
	getCat,
	cat,
	chat,
	emote,
	nickChange,
	nameChanged,
	iconChange,
	iconChanged,
	setAway,
	colorChanged,
	broadcast,
	killCat,
	killedCat,
	newCat,
	postCat,
	kick,
	ban,
	msg,
	msgEmote,
	awayMsg,
	prof,
	getProf,
	userList,
	getInfo,
	servInfo,
	newsList,
	setLockNews,
	info,
	userInfo,
	newPrivChat,
	invPrivChat,
	privChat,
	privEmote,
	pChatLeave,
	privChatAccept,
	refuseIMs,
	acceptIMs,
	refusePChats,
	acceptPChats,
	fileList,
	getFile,
	failTransfer,
	putFile,
	createFolder,
	deleteFile,
	editFileInfo,
	moveFile,
	killTransfer,
	huh,
	trackerMsg,
	getList,
	addServer,
	edServer,
	remServer,
	getServerList,
	serverList,
	addMyServer,
	denied,
	listed,
	removeServer,
	removed
};

constexpr std::map<Id, std::string_view> idMap = {
	{ Id::servMsg, "ServMsg" },
	{ Id::getCat, "getCat" },
	{ Id::cat, "TheCat" },
	{ Id::chat, "Chat" },
	{ Id::emote, "Emote" },
	{ Id::nickChange, "NickChange" },
	{ Id::nameChanged, "NameChanged" },
	{ Id::iconChange, "IconChange" },
	{ Id::iconChanged, "IconChanged" },
	{ Id::setAway, "SetAway" },
	{ Id::colorChanged, "ColorChanged" },
	{ Id::broadcast, "Broadcast" },
	{ Id::killCat, "KillCat" },
	{ Id::killedCat, "KilledCat" },
	{ Id::newCat, "NewCat" },
	{ Id::postCat, "PostCat" },
	{ Id::kick, "Kick" },
	{ Id::ban, "Ban" },
	{ Id::msg, "Msg" },
	{ Id::msgEmote, "MsgEmote" },
	{ Id::awayMsg, "AwayMsg" },
	{ Id::prof, "TheProf" },
	{ Id::getProf, "GetProf" },
	{ Id::userList, "UserList" },
	{ Id::getInfo, "GetInfo" },
	{ Id::servInfo, "ServInfo" },
	{ Id::newsList, "NewsList" },
	{ Id::setLockNews, "SetLockNews" },
	{ Id::info, "Info" },
	{ Id::userInfo, "UserInfo" },
	{ Id::newPrivChat, "NewPrivChat" },
	{ Id::invPrivChat, "InvPrivChat" },
	{ Id::privChat, "PrivChat" },
	{ Id::privEmote, "PrivEmote" },
	{ Id::pChatLeave, "pChatLeave" },
	{ Id::privChatAccept, "PrivChatAccept" },
	{ Id::refuseIMs, "RefuseIMs" },
	{ Id::acceptIMs, "AcceptIMs" },
	{ Id::refusePChats, "RefusePChats" },
	{ Id::acceptPChats, "AcceptPChats" },
	{ Id::fileList, "FileList" },
	{ Id::getFile, "GetFile" },
	{ Id::failTransfer, "FailTransfer" },
	{ Id::putFile, "PutFile" },
	{ Id::createFolder, "CreateFolder" },
	{ Id::deleteFile, "DeleteFile" },
	{ Id::editFileInfo, "EditFileInfo" },
	{ Id::moveFile, "MoveFile" },
	{ Id::killTransfer, "KillTransfer" },
	{ Id::huh, "huh" },
	{ Id::trackerMsg, "msg" },
	{ Id::getList, "GetList" },
	{ Id::addServer, "AddServer" },
	{ Id::edServer, "EdServer" },
	{ Id::remServer, "RemServer" },
	{ Id::getServerList, "GetServerList" },
	{ Id::serverList, "ServerList" },
	{ Id::addMyServer, "AddMyServer" },
	{ Id::denied, "Denied" },
	{ Id::listed, "Listed" },
	{ Id::removeServer, "RemoveServer" },
	{ Id::removed, "Removed" }
};

#endif // _ID_H