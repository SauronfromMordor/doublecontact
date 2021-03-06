/* Double Contact
 *
 * Module: Configuration manager
 *
 * Copyright 2016 Mikhail Y. Zvyozdochkin aka DarkHobbit <pub@zvyozdochkin.ru>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version. See COPYING file for more details.
 *
 */

#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <QSettings>
#include <QStringList>

class ConfigManager
{
public:
    ConfigManager();
    ~ConfigManager();
    void prepare();
    // Common configuration, managed by config dialog
    void readConfig();
    void writeConfig();
    // Separate settings, managed by main window and other dialogs
    QString readLanguage();
    void writeLanguage(const QString& language);
    QString lastContactFile();
    void setLastContactFile(const QString& path);
    QString lastImageFile();
    void setLastImageFile(const QString& path);
    bool showTwoPanels();
    void setShowTwoPanels(bool value);
    bool sortingEnabled();
    void setSortingEnabled(bool value);
    void csvConfig(QString& profile, QString& genEncoding, QString& genSeparator);
    void setCSVConfig(const QString& profile, const QString& genEncoding, const QString& genSeparator);
    static QString defaultDocDir();
    static QString defaultImageDir();
    QStringList validColumnNames; // Available list
private:
    QSettings* settings;
    void updateFormats();
};

extern ConfigManager configManager;

#endif // CONFIGMANAGER_H
