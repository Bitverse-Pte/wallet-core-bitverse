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


TEST(TWPharosTestnetCoinType, TWCoinType) {
    const auto coin = TWCoinTypePharosTestnet;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0x83696ade8e93dc0148836f36bcb1922da093f8b864d58530c6d7fc5b94044e83"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0xCc23091DE47a988DCB1ac8b0a80B49A14fe0A4ab"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "pharostestnet");
    assertStringsEqual(name, "PharosTestnet");
    assertStringsEqual(symbol, "PHRS");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 18);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainEthereum);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "688688");
    assertStringsEqual(txUrl, "https://testnet.pharosscan.xyz/tx0x83696ade8e93dc0148836f36bcb1922da093f8b864d58530c6d7fc5b94044e83");
    assertStringsEqual(accUrl, "https://testnet.pharosscan.xyz/address/0xCc23091DE47a988DCB1ac8b0a80B49A14fe0A4ab");
}
