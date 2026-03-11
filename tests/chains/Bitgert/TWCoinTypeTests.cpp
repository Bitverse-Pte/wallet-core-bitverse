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


TEST(TWBitgertCoinType, TWCoinType) {
    const auto coin = TWCoinTypeBitgert;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0x0247f616cb1d371fa45384da06c0fe70442676fad75773a3f808d03cc761417a"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0x5f30eD8C6623BAFF9B4f73DDC8Cd524E7E99Ce85"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "bitgert");
    assertStringsEqual(name, "Bitgert");
    assertStringsEqual(symbol, "BRISE");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 18);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainEthereum);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "32520");
    assertStringsEqual(txUrl, "https://brisescan.com/tx0x0247f616cb1d371fa45384da06c0fe70442676fad75773a3f808d03cc761417a");
    assertStringsEqual(accUrl, "https://brisescan.com/address/0x5f30eD8C6623BAFF9B4f73DDC8Cd524E7E99Ce85");
}
