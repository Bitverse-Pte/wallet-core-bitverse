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


TEST(TWZIGChainCoinType, TWCoinType) {
    const auto coin = TWCoinTypeZIGChain;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("D6757020EC185410D0073C4D3140544DB2174C95871BB8863A55E3010A269524"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("zig19786dunggq5090jvxy3pz6fc8hugjg5f2tg60y"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "zigchain");
    assertStringsEqual(name, "ZIGChain");
    assertStringsEqual(symbol, "ZIG");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 6);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainCosmos);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "zigchain-1");
    assertStringsEqual(txUrl, "https://www.zigscan.org/tx/D6757020EC185410D0073C4D3140544DB2174C95871BB8863A55E3010A269524");
    assertStringsEqual(accUrl, "https://www.zigscan.org/account/zig19786dunggq5090jvxy3pz6fc8hugjg5f2tg60y");
}
