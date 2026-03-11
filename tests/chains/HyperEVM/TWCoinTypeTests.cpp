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


TEST(TWHyperEVMCoinType, TWCoinType) {
    const auto coin = TWCoinTypeHyperEVM;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0x557ed1b7d620f69161f90423be0d1e0000ae1eff8e61ec9c363fbcf6a5d45f7d"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0x9db9cd2b0e40c139b487752ee13586956fbe626a"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "hyperevm");
    assertStringsEqual(name, "HyperEVM");
    assertStringsEqual(symbol, "HYPE");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 18);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainEthereum);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "999");
    assertStringsEqual(txUrl, "https://app.hyperliquid.xyz/explorer/tx0x557ed1b7d620f69161f90423be0d1e0000ae1eff8e61ec9c363fbcf6a5d45f7d");
    assertStringsEqual(accUrl, "https://app.hyperliquid.xyz/explorer/address/0x9db9cd2b0e40c139b487752ee13586956fbe626a");
}
