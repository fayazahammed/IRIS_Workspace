ROUTINE EnsECP [Type=INC]
#;
	; Copyright (c) 2024 by InterSystems Corporation.
	; Cambridge, Massachusetts, U.S.A.  All rights reserved.
	; Confidential property of InterSystems Corporation.
#; ECP network handling
#;
#; List of globals that constitute core runtime data for framework
#;  not including $$$EnsSuspended, $$$EnsConfigurationGbl or $$$EnsJobStatusStarted
#;
#define EnsECPCoreRuntimeGlobals    $name($$$EnsQueue),$name($$$EnsRuntime)
#;Cache information on ECP state of Namespace
#define EnsECPCacheGlobal                   ^Ens.ECP
#define EnsECPApplicationServers(%node)     $$$EnsECPCacheGlobal("ApplicationServers",%node,$namespace)
#define EnsECPLocalCoreIdentifier           "!LocalCoreGlobals"
