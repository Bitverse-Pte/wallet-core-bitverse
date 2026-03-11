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


TEST(TWMantleTestnetCoinType, TWCoinType) {
    const auto coin = TWCoinTypeMantleTestnet;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0xf97eebc08c4ccd940320fa1813c6de615bbdee111254ea799302df81722fd154"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0xCc23091DE47a988DCB1ac8b0a80B49A14fe0A4ab"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "mantletestnet");
    assertStringsEqual(name, "MantleTestnet");
    assertStringsEqual(symbol, "MNT");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 18);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainEthereum);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "5001");
    assertStringsEqual(txUrl, "https://explorer.testnet.mantle.xyz/tx0xf97eebc08c4ccd940320fa1813c6de615bbdee111254ea799302df81722fd154");
    assertStringsEqual(accUrl, "https://explorer.testnet.mantle.xyz/address/0xCc23091DE47a988DCB1ac8b0a80B49A14fe0A4ab");
}
