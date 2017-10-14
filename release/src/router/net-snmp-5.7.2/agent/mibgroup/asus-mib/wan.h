/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.old-api.conf 14476 2006-04-18 17:36:51Z hardaker $
 */
#ifndef WAN_H
#define WAN_H

/* function declarations */
void init_wan(void);
FindVarMethod var_wan;
FindVarMethod var_dwRoutingRulesTable;
FindVarMethod var_portTriggerTable;
FindVarMethod var_wClientTable;
FindVarMethod var_portForwardingTable;
    WriteMethod write_wwanConnectionType;
    WriteMethod write_wenableWAN;
    WriteMethod write_wenableNAT;
    WriteMethod write_wenableUPnP;
    WriteMethod write_wgetWanIPAuto;
    WriteMethod write_wwIPAddress;
    WriteMethod write_wwSubnetMask;
    WriteMethod write_wwDefaultGateway;
    WriteMethod write_wconnectDNSServerAuto;
    WriteMethod write_wdnsServer1;
    WriteMethod write_wdnsServer2;
    WriteMethod write_wAuthentication;
    WriteMethod write_wUserName;
    WriteMethod write_wPassword;
    WriteMethod write_widleDisconnectTime;
    WriteMethod write_wmtu;
    WriteMethod write_wmru;
    WriteMethod write_wserviceName;
    WriteMethod write_waccessConcentratorName;
    WriteMethod write_wpptpOptions;
    WriteMethod write_wadditionalPppdOptions;
    WriteMethod write_wvpnServer;
    WriteMethod write_wenableVPNandDHCPConnection;
    WriteMethod write_wHostName;
    WriteMethod write_wMacAddress;
    WriteMethod write_wdhcpQueryFrequency;
    WriteMethod write_lwanConnectionType;
    WriteMethod write_lenableWAN;
    WriteMethod write_lenableNAT;
    WriteMethod write_lenableUPnP;
    WriteMethod write_lgetWanIPAuto;
    WriteMethod write_lwIPAddress;
    WriteMethod write_lwSubnetMask;
    WriteMethod write_lwDefaultGateway;
    WriteMethod write_lwconnectDNSServerAuto;
    WriteMethod write_lwdnsServer1;
    WriteMethod write_lwdnsServer2;
    WriteMethod write_lAuthentication;
    WriteMethod write_lUserName;
    WriteMethod write_lPassword;
    WriteMethod write_lidleDisconnectTime;
    WriteMethod write_lmtu;
    WriteMethod write_lmru;
    WriteMethod write_lserviceName;
    WriteMethod write_laccessConcentratorName;
    WriteMethod write_lpptpOptions;
    WriteMethod write_ladditionalPppdOptions;
    WriteMethod write_lvpnServer;
    WriteMethod write_lenableVPNandDHCPConnection;
    WriteMethod write_lHostName;
    WriteMethod write_lMacAddress;
    WriteMethod write_ldhcpQueryFrequency;
    WriteMethod write_uEnableUSBModem;
    WriteMethod write_uUsbModem;
    WriteMethod write_uNetworkType;
    WriteMethod write_uAPNService;
    WriteMethod write_uDialNumber;
    WriteMethod write_uPinCode;
    WriteMethod write_uUsername;
    WriteMethod write_uPassword;
    WriteMethod write_uEmail;
    WriteMethod write_uUSBAdapter;
    WriteMethod write_dwPrimaryWAN;
    WriteMethod write_dwPWLanPort;
    WriteMethod write_dwSecondaryWAN;
    WriteMethod write_dwSWLanPort;
    WriteMethod write_dwDualWANMode;
    WriteMethod write_dwLoadBalanceCfgPri;
    WriteMethod write_dwLoadBalanceCfgSec;
    WriteMethod write_dwAllowFailBack;
    WriteMethod write_dwPingInterval;
    WriteMethod write_dwPingDelay;
    WriteMethod write_dwPingFailCount;
    WriteMethod write_dwPingFbCount;
    WriteMethod write_dwPingEnableWatchdog;
    WriteMethod write_dwPingTarget;
    WriteMethod write_dwEnableRoutingRules;
    WriteMethod write_enablePortTrigger;
    WriteMethod write_enablePortForwarding;
    WriteMethod write_ftpServerPort;
    WriteMethod write_wClientListAct;
    WriteMethod write_enableDMZ;
    WriteMethod write_exposedStationIPAddr;
    WriteMethod write_enableDDNSClient;
    WriteMethod write_ddnsServer;
    WriteMethod write_ddnsHostName;
    WriteMethod write_ddnsUserNameOrMail;
    WriteMethod write_ddnsPasswordOrKey;
    WriteMethod write_enableWildcard;
    WriteMethod write_pptpPassthrough;
    WriteMethod write_l2tpPassthrough;
    WriteMethod write_ipsecPassthrough;
    WriteMethod write_rtspPassthrough;
    WriteMethod write_h323Passthrough;
    WriteMethod write_sipPassthrough;
    WriteMethod write_pppoeRelay;
    WriteMethod write_dwSourceIP;
    WriteMethod write_dwDestinationIP;
    WriteMethod write_dwWANUnit;
    WriteMethod write_dwRoutingRuleDelEntry;
    WriteMethod write_portTriggerDescription;
    WriteMethod write_portTriggerPort;
    WriteMethod write_portTriggerProtocol;
    WriteMethod write_portTriggerIncomingPort;
    WriteMethod write_portTriggerIncomingProtocol;
    WriteMethod write_portTriggerDelEntry;
    WriteMethod write_portForwardingServiceName;
    WriteMethod write_portForwardingPortRange;
    WriteMethod write_portForwardingLocalIP;
    WriteMethod write_portForwardingLocalPort;
    WriteMethod write_portForwardingProtocol;
    WriteMethod write_portForwardingDelEntry;

#endif /* WAN_H */