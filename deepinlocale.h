/*This file is auto generate by dlib/dbus/proxyer. Don't edit it*/
#include <QObject>
#include <libintl.h>

#ifndef __LOCALE_H__
#define __LOCALE_H__

class DLocale: public QObject
{
    Q_OBJECT
public:
        //LC_ALL for all of the locale.

        //LC_COLLATE
        //for regular expression matching (it determines the meaning of range expressions and equivalence classes) and string collation.

        //LC_CTYPE
        //for regular expression matching, character classification, conversion, case-sensitive comparison, and wide character functions.

        //LC_MESSAGES
        //for localizable natural-language messages.

        //LC_MONETARY
        //for monetary formatting.

        //LC_NUMERIC
        //for number formatting (such as the decimal point and the thousands separator).

        //LC_TIME

    Q_PROPERTY(QString domain READ domain WRITE setDomain NOTIFY domainChanged)

    Q_PROPERTY(QString localeALL READ localeALL WRITE setALL NOTIFY localeALLChanged)
    Q_PROPERTY(QString localeCOLLATE READ localeCOLLATE WRITE setCOLLATE NOTIFY localeCOLLATEChanged)
    Q_PROPERTY(QString localeCTYPE READ localeCTYPE WRITE setCTYPE NOTIFY localeCTYPEChanged)
    Q_PROPERTY(QString localeMESSAGES READ localeMESSAGES WRITE setMESSAGES NOTIFY localeMESSAGESChanged)
    Q_PROPERTY(QString localeMONETARY READ localeMONETARY WRITE setMONETARY NOTIFY localeMONETARYChanged)
    Q_PROPERTY(QString localeNUMERIC READ localeNUMERIC WRITE setNUMERIC NOTIFY localeNUMERICChanged)
    Q_PROPERTY(QString localeTIME READ localeTIME WRITE setTIME NOTIFY localeTIMEChanged)

    const QString domain() {
        return m_domain;
    }
    void setDomain (const QString& s) {
        m_domain= s;
    }

    Q_INVOKABLE const QString dsTr(const QString & msgId) {
        return dgettext(m_domain.toLocal8Bit(), msgId.toLocal8Bit());
    }

    DLocale(QObject* parent=0)
        : QObject(parent)
    {
	 setlocale(LC_ALL, "");
    }

    const QString localeALL() { }
    const QString localeCOLLATE() { }
    const QString localeCTYPE() { }
    const QString localeMESSAGES() { }
    const QString localeMONETARY() { }
    const QString localeNUMERIC() { }
    const QString localeTIME() { }

    void setALL(const QString& locale) {
        setlocale(LC_ALL, locale.toLocal8Bit());
    }
    void setCOLLATE(const QString& locale) {
        setlocale(LC_COLLATE, locale.toLocal8Bit());
    }
    void setCTYPE(const QString& locale) {
        setlocale(LC_CTYPE, locale.toLocal8Bit());
    }
    void setMESSAGES(const QString& locale) {
        setlocale(LC_MESSAGES, locale.toLocal8Bit());
    }
    void setMONETARY(const QString& locale) {
        setlocale(LC_MONETARY, locale.toLocal8Bit());
    }
    void setNUMERIC(const QString& locale) {
        setlocale(LC_NUMERIC, locale.toLocal8Bit());
    }
    void setTIME(const QString& locale) {
        setlocale(LC_TIME, locale.toLocal8Bit());
    }


    Q_SIGNAL void domainChanged(const QString&);
    Q_SIGNAL void localeALLChanged(const QString&);
    Q_SIGNAL void localeCOLLATEChanged(const QString&);
    Q_SIGNAL void localeCTYPEChanged(const QString&);
    Q_SIGNAL void localeMESSAGESChanged(const QString&);
    Q_SIGNAL void localeMONETARYChanged(const QString&);
    Q_SIGNAL void localeNUMERICChanged(const QString&);
    Q_SIGNAL void localeTIMEChanged(const QString&);
private:
    QString m_domain;
};

#endif
