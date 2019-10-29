testrunner = find_program('ipcalc-testrunner.sh')

# --class-prefix tests
test('AssignClassPrefix12',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -abmnp 12.15.1.5 --class-prefix',
		files('12.15.1.5')
	]
)
test('AssignClassPrefix129',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -abmnp 129.15.31.5 --class-prefix',
		files('129.15.31.5')
	]
)
test('AssignClassPrefix193',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -abmnp 193.92.31.0 --class-prefix',
		files('193.92.31.0')
	]
)

# prefix tests
test('TestPrefix31',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -abmnp 192.168.1.5/31',
		files('192.168.1.5-31')
	]
)
test('TestPrefix24',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -abmnp 10.10.10.5/24',
		files('192.168.1.5-24')
	]
)
test('TestPrefix30',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -abmnp 10.100.4.1/30',
		files('192.168.1.5-30')
	]
)
test('TestPrefix16',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -abmnp 10.100.4.1/16',
		files('192.168.1.5-16')
	]
)
test('TestPrefix8',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -abmnp 10.10.10.10/8',
		files('192.168.1.5-8')
	]
)

# --split tests
test('SplitPrefix18',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -S 18 10.10.10.10/16',
		files('split-10.10.10.0-16-18')
	]
)
test('SplitPrefix24',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -S 24 10.10.10.0/16',
		files('split-10.10.10.0-16-24')
	]
)
test('SplitPrefix26',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -S 26 192.168.5.45/24',
		files('split-192.168.5.45-24-26')
	]
)
test('SplitPrefix29',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -S 29 192.168.5.0/24',
		files('split-192.168.5.0-24-29')
	]
)
test('SplitPrefix31',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -S 31 192.168.5.0/24',
		files('split-192.168.5.0-24-31')
	]
)
test('SplitPrefix32',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -S 32 192.168.5.0/24',
		files('split-192.168.5.0-24-32')
	]
)
test('SplitPrefix64',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -S 64 2a03:2880:20:4f06:face::/56',
		files('split-2a03:2880:20:4f06:face::-56-64')
	]
)
test('SplitPrefix128',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -S 128 fcfa:b4ca:f1d8:125b:dc00::/127',
		files('split-fcfa:b4ca:f1d8:125b:dc00::-127-128')
	]
)
test('SplitPrefix120',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -S 120 fcfa:b4ca:f1d8:125b:dc00::/112',
		files('split-fcfa:b4ca:f1d8:125b:dc00::-112-120')
	]
)

# --no-decorate tests
test('NoDecorateSplitPrefix18',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --no-decorate -S 18 10.10.10.10/16',
		files('nsplit-10.10.10.0-16-18')
	]
)
test('NoDecorateSplitPrefix24',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --no-decorate -S 24 10.10.10.0/16',
		files('nsplit-10.10.10.0-16-24')
	]
)
test('NoDecorateSplitPrefix26',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --no-decorate -S 26 192.168.5.45/24',
		files('nsplit-192.168.5.45-24-26')
	]
)
test('NoDecorateSplitPrefix29',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --no-decorate -S 29 192.168.5.0/24',
		files('nsplit-192.168.5.0-24-29')
	]
)
test('NoDecorateSplitPrefix31',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --no-decorate -S 31 192.168.5.0/24',
		files('nsplit-192.168.5.0-24-31')
	]
)
test('NoDecorateSplitPrefix32',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --no-decorate -S 32 192.168.5.0/24',
		files('nsplit-192.168.5.0-24-32')
	]
)
test('NoDecorateSplitPrefix64',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --no-decorate -S 64 2a03:2880:20:4f06:face::/56',
		files('nsplit-2a03:2880:20:4f06:face::-56-64')
	]
)
test('NoDecorateSplitPrefix128',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --no-decorate -S 128 fcfa:b4ca:f1d8:125b:dc00::/127',
		files('nsplit-fcfa:b4ca:f1d8:125b:dc00::-127-128')
	]
)
test('NoDecorateSplitPrefix120',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --no-decorate -S 120 fcfa:b4ca:f1d8:125b:dc00::/112',
		files('nsplit-fcfa:b4ca:f1d8:125b:dc00::-112-120')
	]
)

# --addrspace tests
test('AllocateAddressSpacePrefix24',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --addrspace -abmnp 193.92.150.3/24',
		files('193.92.150.3-24')
	]
)
test('AllocateAddressSpacePrefix64',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --addrspace -abmnp fd95:6be5:0ae0:84a5::/64',
		files('fd95:6be5:0ae0:84a5::-64')
	]
)
test('AllocateAddressSpacePrefix48',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --addrspace -abmnp fd0b:a336:4e7d::/48',
		files('fd0b:a336:4e7d::-48')
	]
)

# --info tests
test('TestHumanReadableGenericInfoNoPrefix',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2a03:2880:20:4f06:face:b00c:0:1',
		files('i-2a03:2880:20:4f06:face:b00c:0:1')
	]
)
test('TestHumanReadableTranslat96',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 64:ff9b::2100:951a',
		files('i-64:ff9b::2100:951a')
	]
)
test('TestHumanReadableTranslat48',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 64:ff9b:1:ea21:4316:55::1',
		files('i-64:ff9b:1:ea21:4316:55::1')
	]
)
test('TestHumanReadableTEREDO',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2001:0000:50::d78a:0:c',
		files('i-2001:0:50::d78a:0:c')
	]
)
test('TestHumanReadablePortControlProtocolAnycast',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2001:1::1',
		files('i-2001:1::1')
	]
)
test('TestHumanReadableTraversalUsingRelays',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2001:1::2',
		files('i-2001:1::2')
	]
)
test('TestHumanReadableBenchmarking',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2001:2:0:a::5:b7f',
		files('i-2001:2:0:a::5:b7f')
	]
)
test('TestHumanReadableAMT',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2001:3:89:71::ab:1',
		files('i-2001:3:89:71::ab:1')
	]
)
test('TestHumanReadableAS112v6',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2001:4:112::6483:bd12:9010',
		files('i-2001:4:112::6483:bd12:9010')
	]
)
test('TestHumanReadableORCHID',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2001:1e:ab:7::',
		files('i-2001:1e:ab:7::')
	]
)
test('TestHumanReadableORCHIDv2',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2001:2c:ab:7::',
		files('i-2001:2c:ab:7::')
	]
)
test('TestHumanReadableDocumentation',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2001:db8:329::4a',
		files('i-2001:db8:329::4a')
	]
)
test('TestHumanReadableIETFProtocolAssignments',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2001:190:70::e86a:0:b',
		files('i-2001:190:70::e86a:0:b')
	]
)
test('TestHumanReadable6to4',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2002::34',
		files('i-2002::34')
	]
)
test('TestHumanReadableDirectDelegationAS112Service',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 2620:4f:8000::7372:ad1',
		files('i-2620:4f:8000::7372:ad1')
	]
)
test('TestHumanReadableUniqueLocalUnicast',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i fc00:0:a001::bcdf:4',
		files('i-fc00:0:a001::bcdf:4')
	]
)
test('TestHumanReadableLinkScopedUnicast',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i fe80::b:0:7acd:0:5',
		files('i-fe80::b:0:7acd:0:5')
	]
)
test('TestHumanReadableGenericInfoPrefix48',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i fd0b:a336:4e7d::/48',
		files('i-fd0b:a336:4e7d::-48')
	]
)

# --split advanced tests
test('SplitLinesByNetworkIPv4',
	testrunner,
	args : [
		'--test-equal',
		ipcalc.full_path() + ' -S 29 192.168.5.0/24 | grep ^Network | wc -l',
		ipcalc.full_path() + ' -S 29 192.168.5.0/24 | grep ^Total | cut -d: -f 2 | tr -d [:space:]'
	]
)
test('SplitLinesByNetworkIPv6',
	testrunner,
	args : [
		'--test-equal',
		ipcalc.full_path() + ' -S 120 fcfa:b4ca:f1d8:125b:dc00::/112 | grep ^Network | wc -l',
		ipcalc.full_path() + ' -S 120 fcfa:b4ca:f1d8:125b:dc00::/112 | grep ^Total|cut -d: -f 2 | tr -d [:space:]'
	]
)

# --help test
test('TestHelpCommand',
	testrunner,
	args : [
		'--test-success',
		ipcalc.full_path() + ' --help'
	]
)

# --check loopback tests
test('ValidateLoopbackIPv4',
	testrunner,
	args : [
		'--test-success',
		ipcalc.full_path() + ' -c 127.0.0.1'
	]
)
test('ValidateLoopbackExplicitIPv6',
	testrunner,
	args : [
		'--test-success',
		ipcalc.full_path() + ' -c -6 ::1'
	]
)
test('ValidateLoopbackIPv6',
	testrunner,
	args : [
		'--test-success',
		ipcalc.full_path() + ' -c ::1'
	]
)

# --check tests
test('ValidatePrivateIPv4',
	testrunner,
	args : [
		'--test-success',
		ipcalc.full_path() + ' -c 192.168.1.1'
	]
)
test('ValidateAbbreviatedGlobalIPv6',
	testrunner,
	args : [
		'--test-success',
		ipcalc.full_path() + ' -c -6 2a01:198:200:300::2'
	]
)
test('ValidateExpandedGlobalIPv6',
	testrunner,
	args : [
		'--test-success',
		ipcalc.full_path() + ' -c -6 2a01:198:200:300:0000:0000:0000:2'
	]
)
test('ValidateCompleteGlobalIPv6',
	testrunner,
	args : [
		'--test-success',
		ipcalc.full_path() + ' -c -6 2a01:0198:0200:0300:0000:0000:0000:0002'
	]
)
test('ValidateLoopbackIPv6WithPrefix',
	testrunner,
	args : [
		'--test-success',
		ipcalc.full_path() + ' -c -6 ::1/128'
	]
)
test('ValidateReservedIPv6WithPrefix',
	testrunner,
	args : [
		'--test-success',
		ipcalc.full_path() + ' -c -6 fec0::1:0:0:c0a8:8002/64'
	]
)

# --check invalid input tests
test('NoValidateInvalidHexIPv6',
	testrunner,
	args : [
		'--test-failure',
		ipcalc.full_path() + ' -c -6 gggg::'
	]
)
# FIXME: This test case unexpectedly works, so it is disabled for now.
#test('NoValidateInvalidBroadcastIPv6',
#	testrunner,
#	args : [
#		'--test-failure',
#		ipcalc.full_path() + ' -b -6 ::1/128'
#	]
#)
test('NoAllowIPv4AndIPv6',
	testrunner,
	args : [
		'--test-failure',
		ipcalc.full_path() + ' -4 -6 2a01:198:200:300:0000:0000:0000:2'
	]
)
test('NoValidateIPv6InIPv4Mode',
	testrunner,
	args : [
		'--test-failure',
		ipcalc.full_path() + ' -c -4 2a01:198:200:300:0000:0000:0000:2'
	]
)
test('NoValidateIPv4AndIPv6WithIPv4Address',
	testrunner,
	args : [
		'--test-failure',
		ipcalc.full_path() + ' -c -4 -6 127.0.0.1'
	]
)
test('NoValidateInvalidPrefixIPv6',
	testrunner,
	args : [
		'--test-failure',
		ipcalc.full_path() + ' -c ::1/999'
	]
)

# --netmask invalid input tests
test('NoValidateNegativePrefix',
	testrunner,
	args : [
		'--test-failure',
		ipcalc.full_path() + ' -m 192.168.1.1/-1'
	]
)
test('NoValidateIPv6PrefixInIPv4Mode',
	testrunner,
	args : [
		'--test-failure',
		ipcalc.full_path() + ' -m 192.168.1.1/64'
	]
)
test('NoValidateInvalidPrefixIPv4',
	testrunner,
	args : [
		'--test-failure',
		ipcalc.full_path() + ' -m 192.168.1.1/99999'
	]
)

# --broadcast output tests
test('CalculateBroadcastAddressFromPrefixIPv4',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' -b 192.168.1.1/24',
		'BROADCAST=192.168.1.255'
	]
)
test('CalculateBroadcastAddressFromNetmaskIPv4',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' -b 192.168.1.1 255.255.255.0',
		'BROADCAST=192.168.1.255'
	]
)

# --netmask output tests
test('CalculateNetmaskPrefix24',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' -m 192.168.1.1/24',
		'NETMASK=255.255.255.0'
	]
)
test('CalculateNetmaskPrefix22',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' -m 172.16.59.222/22',
		'NETMASK=255.255.252.0'
	]
)
test('CalculateNetmaskNoPrefix',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' -m 192.168.1.1',
		'NETMASK=255.255.255.255'
	]
)

# --prefix output tests
test('CalculatePrefix24FromNetmask',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' -p 192.168.1.1 255.255.255.0',
		'PREFIX=24'
	]
)
test('CalculatePrefix32FromNetmask',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' -p 192.168.1.1 255.255.255.255',
		'PREFIX=32'
	]
)
test('CalculatePrefix0FromNetmask',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' -p 192.168.1.1 0.0.0.0',
		'PREFIX=0'
	]
)
test('CalculatePrefix22FromNetmask',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' -p 172.16.59.222 255.255.252.0',
		'PREFIX=22'
	]
)

# --class-prefix output tests
test('CalculateClassNetmask24',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --class-prefix -m 192.168.1.1',
		'NETMASK=255.255.255.0'
	]
)
test('CalculateClassNetmask8',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --class-prefix -m 10.1.2.3',
		'NETMASK=255.0.0.0'
	]
)
test('CalculateClassNetmask16',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --class-prefix -m 129.22.4.3',
		'NETMASK=255.255.0.0'
	]
)

# --network output tests
test('CalculateNetworkFromPrefix32',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' -n 192.168.1.1/32',
		'NETWORK=192.168.1.1'
	]
)
test('CalculateNetworkFromPrefix0',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' -n 192.168.1.1/0',
		'NETWORK=0.0.0.0'
	]
)

# --reverse-dns output tests
test('LookupReverseDNSFromPrefix32IPv4',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --reverse-dns 193.92.150.3/32',
		'REVERSEDNS=3.150.92.193.in-addr.arpa.'
	]
)
test('LookupReverseDNSFromPrefix26IPv4',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --reverse-dns 193.92.150.3/26',
		'REVERSEDNS=0-63.150.92.193.in-addr.arpa.'
	]
)
test('LookupReverseDNSFromPrefix16IPv4',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --reverse-dns 193.92.150.3/16',
		'REVERSEDNS=92.193.in-addr.arpa.'
	]
)
test('LookupReverseDNSFromPrefix12IPv4',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --reverse-dns 193.92.150.3/12',
		'REVERSEDNS=80-95.193.in-addr.arpa.'
	]
)
test('LookupReverseDNS4321IPv6',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --reverse-dns 4321:0:1:2:3:4:567:89ab',
		'REVERSEDNS=b.a.9.8.7.6.5.0.4.0.0.0.3.0.0.0.2.0.0.0.1.0.0.0.0.0.0.0.1.2.3.4.ip6.arpa.'
	]
)
test('LookupReverseDNSFirstIPv6',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --reverse-dns 1::',
		'REVERSEDNS=0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.1.0.0.0.ip6.arpa.'
	]
)
test('LookupReverseDNSLoopbackIPv6',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --reverse-dns ::1',
		'REVERSEDNS=1.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.ip6.arpa.'
	]
)
test('LookupReverseDNSFromPrefix128IPv6',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --reverse-dns 1234::4321/128',
		'REVERSEDNS=1.2.3.4.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.4.3.2.1.ip6.arpa.'
	]
)
test('LookupReverseDNSFromPrefix124IPv6',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --reverse-dns 1234::4321/124',
		'REVERSEDNS=2.3.4.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.4.3.2.1.ip6.arpa.'
	]
)
test('LookupReverseDNSFromPrefix120IPv6',
	testrunner,
	args : [
		'--test-output',
		ipcalc.full_path() + ' --reverse-dns 1234::4321/120',
		'REVERSEDNS=3.4.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.4.3.2.1.ip6.arpa.'
	]
)
# specific info decorated & no-decorate test
test('SpecificInfoOutput',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -abmnp --minaddr --maxaddr --addresses 192.168.2.6/24',
		files('192.168.2.6')
	]
)
test('SpecificInfoOutputNoDecorate',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -abmnp --minaddr --maxaddr --addresses --no-decorate 192.168.2.7/24',
		files('192.168.2.7')
	]
)
test('AllInfo',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' --all-info 192.168.2.7/24',
		files('all-info-192.168.2.7')
	]
)
test('Info',
	testrunner,
	args : [
		'--test-outfile',
		ipcalc.full_path() + ' -i 192.168.2.7/24',
		files('info-192.168.2.7')
	]
)
