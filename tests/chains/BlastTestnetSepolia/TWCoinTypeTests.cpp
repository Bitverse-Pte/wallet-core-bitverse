// SPDX-License-Identifier: Apache-2.0
//
// Copyright © 2017 Trust Wallet.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "TestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWBlastTestnetSepoliaCoinType, TWCoinType) {
    const auto coin = TWCoinTypeBlastTestnetSepolia;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0x744ec6390988dacff34e813c814b1ca073e81409d13a418e0ab6d875b22d3ee8"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0x39abb33adb442aab80dac6dc37db2814816df22c"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "blasttestnet");
    assertStringsEqual(name, "BlastTestnetSepolia");
    assertStringsEqual(symbol, "ETH");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 18);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainEthereum);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "168587773");
    assertStringsEqual(txUrl, "https://testnet.blastscan.io/tx0x744ec6390988dacff34e813c814b1ca073e81409d13a418e0ab6d875b22d3ee8");
    assertStringsEqual(accUrl, "https://testnet.blastscan.io/address/0x39abb33adb442aab80dac6dc37db2814816df22c");
}
