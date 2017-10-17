//
//  FirebaseAuthUtilities.h
//  titanium-firebase-auth
//
//  Created by Hans Knöchel on 16.10.17.
//

#import <Foundation/Foundation.h>

@class FIRUser, FIRAdditionalUserInfo, FIRAuthCredential;

@interface FirebaseAuthUtilities : NSObject

+ (NSDictionary * _Nullable)dictionaryFromUser:(FIRUser * _Nullable)user;

+ (NSDictionary * _Nullable)dictionaryFromError:(NSError * _Nullable)error;

+ (NSDictionary * _Nullable)dictionaryFromAdditionalUserInfo:(FIRAdditionalUserInfo * _Nullable)additionalUserInfo;

@end
