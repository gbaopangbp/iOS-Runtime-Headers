/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class NSString;

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription> {
    int _action;
    struct __SecTrust { } *_trust;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id)_expirationDate;
- (unsigned long long)certificateCount;
- (id)certificateExpirationDateAtIndex:(unsigned long long)arg1;
- (id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
- (id)certificatePropertiesAtIndex:(unsigned long long)arg1;
- (id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 action:(int)arg2;
- (bool)isRootCertificate;
- (bool)isTrusted;
- (id)summaryDescriptionItems;
- (id)summarySubtitle;
- (id)summaryTitle;

@end
