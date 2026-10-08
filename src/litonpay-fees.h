// Copyright (c) 2026 The Fitecash Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_FITECASH_FEES_H
#define BITCOIN_FITECASH_FEES_H

#include "amount.h"
#include "chain.h"
#include "chainparams.h"

#ifdef ENABLE_WALLET

enum FeeRatePreset
{
    MINIMUM,
    MORE,
    WOW,
    AMAZE,
    MANY_GENEROUS,
    SUCH_EXPENSIVE
};

/** Estimate fee rate needed to get into the next nBlocks */
CFeeRate GetFitecashFeeRate(int priority);
const std::string GetFitecashPriorityLabel(int priority);
#endif // ENABLE_WALLET
CAmount GetFitecashMinRelayFee(const CTransaction& tx, unsigned int nBytes, bool fAllowFree);
CAmount GetFitecashDustFee(const std::vector<CTxOut> &vout, const CAmount dustLimit);

#endif // BITCOIN_FITECASH_FEES_H
