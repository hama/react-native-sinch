# react-native-sinch
[![npm version](https://badge.fury.io/js/react-native-sinch.svg)](https://badge.fury.io/js/react-native-sinch)
<br>
Sinch Verification for react native. http://www.sinch.com

https://github.com/kevinresol/react-native-sinch-verification  is not working now , so i write the new one.

<h3>Installation</h3>
<code>
npm install react-native-sinch
</code>
<code>
react-native link react-native-sinch
</code>

<h4>iOS</h4>
add following to the ios/Podfile :
<code>
pod 'SinchVerification'
</code>
then 
<code>
pod install
</code>
<h4>Android</h4>
<ol>
<li><code>cp node_modules/react-native-sinch/android/libs/sinch-android-verification-1.4.1.aar android/app/libs/</code></li>
<li>edit android/app/build.gradle 

<code><br>
repositories {
    mavenCentral()
    <b>
    flatDir {
        dirs 'libs'
    }
    </b>
}
</code>


</li>
<li>require the permissions as specified <a href="https://www.sinch.com/docs/verification/android/#permissions">here</a></li>
</ol>

#Usage

<div class="highlight highlight-source-js"><pre><span class="pl-k">var</span> RNSinch <span class="pl-k">=</span> <span class="pl-c1">require</span>(<span class="pl-s"><span class="pl-pds">'</span>react-native-sinch<span class="pl-pds">'</span></span>);
<span class="pl-k">var</span> custom <span class="pl-k">=</span> <span class="pl-s"><span class="pl-pds">"</span>A custom string to be sent to your server backend, through Sinch's callback URL<span class="pl-pds">"</span></span>;

<span class="pl-c"><span class="pl-c">//</span> init with app key</span>
<span class="pl-smi">RNSinch</span>.<span class="pl-en">init</span>(<span class="pl-s"><span class="pl-pds">'</span>your-app-key<span class="pl-pds">'</span></span>);

<span class="pl-c"><span class="pl-c">//</span> sms verification</span>
<span class="pl-smi">RNSinch</span>.<span class="pl-en">sms</span>(<span class="pl-s"><span class="pl-pds">'</span>your-phone-number-without-country-code<span class="pl-pds">'</span></span>, custom, (<span class="pl-smi">err</span>, <span class="pl-smi">res</span>) <span class="pl-k">=&gt;</span> {
  <span class="pl-k">if</span> (<span class="pl-k">!</span>err) {
      <span class="pl-c"><span class="pl-c">//</span> for android, verification is done, because the sms has been read automatically</span>
      <span class="pl-c"><span class="pl-c">//</span> for ios, this means the sms has been sent out, you need to call verify with the received code</span>
  }
});

<span class="pl-c"><span class="pl-c">//</span> verify the received code (not needed on android)</span>
<span class="pl-smi">RNSinch</span>.<span class="pl-en">verify</span>(<span class="pl-s"><span class="pl-pds">'</span>the-received-code<span class="pl-pds">'</span></span>, (<span class="pl-smi">err</span>, <span class="pl-smi">res</span>) <span class="pl-k">=&gt;</span> {
  <span class="pl-k">if</span> (<span class="pl-k">!</span>err) {
      <span class="pl-c"><span class="pl-c">//</span> done!</span>
  }
});

<span class="pl-c"><span class="pl-c">//</span> flash call verification (android only)</span>
<span class="pl-smi">RNSinch</span>.<span class="pl-en">flashCall</span>(<span class="pl-s"><span class="pl-pds">'</span>your-phone-number-without-country-code<span class="pl-pds">'</span></span>, custom, (<span class="pl-smi">err</span>, <span class="pl-smi">res</span>) <span class="pl-k">=&gt;</span> {
  <span class="pl-k">if</span> (<span class="pl-k">!</span>err) {
      <span class="pl-c"><span class="pl-c">//</span> done!</span>
  }
});
</pre></div>
