// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2015 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <univalue.h>
#include <script/ismine.h>
#include <wallet/wallet.h>

void ListAPITransactions(const CWalletTx& wtx, UniValue& ret, const isminefilter& filter);

UniValue StateSinceBlock(UniValue& ret, std::string block);

bool EnsureWalletIsAvailable(bool avoidException);

vector<string> GetMyAccountNames();

void EnsureWalletIsUnlocked();