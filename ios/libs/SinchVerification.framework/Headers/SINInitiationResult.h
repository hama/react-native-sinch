/*
 * Copyright (c) 2016 Sinch AB. All rights reserved.
 *
 * See LICENSE file for license terms and information.
 */

@protocol SINInitiationResult <NSObject>

/**
 * A boolean value indicating whether the initiation succeed.
 */
@property (nonatomic, assign, readonly) BOOL success;

/**
 * The content language for SMS verification, returned as an IETF language tag in 'Language-Region' format.
 *
 * Example: 'en-US' (English as used in the United States). For more information, check IETF's document at
 * https://tools.ietf.org/html/bcp47
 */
@property (nonatomic, readonly) NSString* contentLanguage;

@end
