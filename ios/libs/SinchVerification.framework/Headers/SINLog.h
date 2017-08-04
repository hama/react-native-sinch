/*
 * Copyright (c) 2016 Sinch AB. All rights reserved.
 *
 * See LICENSE file for license terms and information.
 */

#ifndef SIN_LOG_H
#define SIN_LOG_H

#import "SINVLogSeverity.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^SINLogCallback)(SINVLogSeverity severity, NSString* area, NSString* message, NSDate* timestamp);

NS_ASSUME_NONNULL_END

#endif  // SIN_LOG_H
