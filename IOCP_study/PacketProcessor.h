#pragma once
#include "ClientSession.h"
#include "Packet.h"
#include <memory>
#define NO_SCORE -1

static std::shared_ptr<ClientSession> waitingPlayer = nullptr;
static std::shared_ptr<ClientSession> player1 = nullptr;
static std::shared_ptr<ClientSession> player2 = nullptr;
static bool IsMatching = false;
static int score1 = NO_SCORE;
static int score2 = NO_SCORE;

class PacketProcessor
{
public:
	static void ProcessPacket(std::shared_ptr<ClientSession> session, const char* data, int len);
	static void HandleMatchRequest(std::shared_ptr<ClientSession> session);
	static void SendMessageToPlayer(std::shared_ptr<ClientSession> sender, const char* data, int len);
};