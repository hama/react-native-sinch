var React = require('react-native');
var NativeModules = React.NativeModules;
var Platform = React.Platform;
var invariant = require('invariant');
var SinchVerificationIOS = NativeModules.RNSinch;
var SinchVerificationAndroid = NativeModules.RNSinchAndroid;

var RNSinch;
if (Platform.OS === 'ios') {
    invariant(SinchVerificationIOS, 'Import libraries to iOS "react-native link react-native-sinch"');
    RNSinch = SinchVerificationIOS;
} else if (Platform.OS === 'android') {
    invariant(SinchVerificationAndroid, 'Import libraries to android "react-native link react-native-sinch"');
    RNSinch = SinchVerificationAndroid;
} else {
    invariant(RNSinch, "Invalid platform");
}

var applicationKey = null;

module.exports = {
	
	init: function(appKey) {
		applicationKey = appKey;
	},
	
	sms: function(phoneNumber, custom, callback) {
		invariant(applicationKey, 'Call init() to setup the Sinch application key.');
        RNSinch.sms(applicationKey, phoneNumber, custom, callback);
	},
	
	flashCall: function(phoneNumber, custom, callback) {
		invariant(applicationKey, 'Call init() to setup the Sinch application key.');
        RNSinch.flashCall(applicationKey, phoneNumber, custom, callback);
	},
	
	verify: RNSinch.verify,
	
}