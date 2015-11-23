/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RDSupport.framework/RDSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface RDSetupSupport : NSObject
+(id)enableNanoDaemons;
+(void)startIDSLocalSetupWithInterfaceName:(id)arg1 ipAddress:(id)arg2 forceKill:(BOOL)arg3 ;
+(void)changeGizmoLanguage:(id)arg1 locale:(id)arg2 ;
+(BOOL)hasIDSPairingRecords;
+(void)resetIDSPairingRecords;
+(id)sharedDaemonXPCConnection;
+(void)startIDSLocalSetup;
+(id)disableNanoDaemons;
+(void)enableLocationServicesForKnownApplications;
@end
