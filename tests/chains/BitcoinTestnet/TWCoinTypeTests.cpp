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


TEST(TWBitcoinTestnetCoinType, TWCoinType) {
    const auto coin = TWCoinTypeBitcoinTestnet;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("2628679656093f062455ba9c34e10d60b6da01e7336e0d0df3b817d9a7dda23b"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("tb1qks8l9haxjszn9r6yf2dm65ed3w6wmz85r379ms"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "bitcointestnet");
    assertStringsEqual(name, "BitcoinTestnet");
    assertStringsEqual(symbol, "BTC");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 8);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainBitcoin);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0xc4);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(txUrl, "https://blockchair.com/bitcoin/testnet/transaction/2628679656093f062455ba9c34e10d60b6da01e7336e0d0df3b817d9a7dda23b");
    assertStringsEqual(accUrl, "https://blockchair.com/bitcoin/testnet/address/tb1qks8l9haxjszn9r6yf2dm65ed3w6wmz85r379ms");
}
