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


TEST(TWYymmTestnetCoinType, TWCoinType) {
    const auto coin = TWCoinTypeYymmTestnet;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("F236222E4F7C92FA84711FD6451ED22DD56CBDFA319BFDAFB99A21E4E9B9EC2F"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("yymm1adl7usw7z2dnysyn7wvrghu0u0q6gr7jqs4gtt"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "yymmtestnet");
    assertStringsEqual(name, "YYMM Testnet Chain");
    assertStringsEqual(symbol, "BV");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 18);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainCosmos);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "yymm_585858-1");
    assertStringsEqual(txUrl, "https://mintscan.io/cosmos/txs/F236222E4F7C92FA84711FD6451ED22DD56CBDFA319BFDAFB99A21E4E9B9EC2F");
    assertStringsEqual(accUrl, "https://mintscan.io/cosmos/account/yymm1adl7usw7z2dnysyn7wvrghu0u0q6gr7jqs4gtt");
}
