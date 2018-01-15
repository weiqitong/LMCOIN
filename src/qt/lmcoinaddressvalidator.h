// Copyright (c) 2011-2014 The Lmcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LMCOIN_QT_LMCOINADDRESSVALIDATOR_H
#define LMCOIN_QT_LMCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class LmcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LmcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Lmcoin address widget validator, checks for a valid lmcoin address.
 */
class LmcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LmcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // LMCOIN_QT_LMCOINADDRESSVALIDATOR_H
