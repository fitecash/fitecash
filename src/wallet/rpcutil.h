// Copyright (c) 2026 The Fitecash Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Utility functions for RPC commands
 */
#ifndef FITECASH_WALLET_UTIL_H
#define FITECASH_WALLET_UTIL_H

#include "fs.h"
#include "util.h"

fs::path GetBackupDirFromInput(std::string strUserFilename);

#endif // FITECASH_WALLET_UTIL_H
