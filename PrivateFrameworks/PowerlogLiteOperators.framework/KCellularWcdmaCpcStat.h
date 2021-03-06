/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface KCellularWcdmaCpcStat : PBCodable <NSCopying> {
    unsigned int  _energy;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int energy : 1; 
        unsigned int rxOnDurationMs : 1; 
        unsigned int rxTxOffDurationMs : 1; 
        unsigned int totalDurationMs : 1; 
    }  _has;
    unsigned int  _rxOnDurationMs;
    unsigned int  _rxTxOffDurationMs;
    unsigned long long  _timestamp;
    unsigned int  _totalDurationMs;
}

@property (nonatomic) unsigned int energy;
@property (nonatomic) BOOL hasEnergy;
@property (nonatomic) BOOL hasRxOnDurationMs;
@property (nonatomic) BOOL hasRxTxOffDurationMs;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalDurationMs;
@property (nonatomic) unsigned int rxOnDurationMs;
@property (nonatomic) unsigned int rxTxOffDurationMs;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int totalDurationMs;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)energy;
- (BOOL)hasEnergy;
- (BOOL)hasRxOnDurationMs;
- (BOOL)hasRxTxOffDurationMs;
- (BOOL)hasTimestamp;
- (BOOL)hasTotalDurationMs;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)rxOnDurationMs;
- (unsigned int)rxTxOffDurationMs;
- (void)setEnergy:(unsigned int)arg1;
- (void)setHasEnergy:(BOOL)arg1;
- (void)setHasRxOnDurationMs:(BOOL)arg1;
- (void)setHasRxTxOffDurationMs:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTotalDurationMs:(BOOL)arg1;
- (void)setRxOnDurationMs:(unsigned int)arg1;
- (void)setRxTxOffDurationMs:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalDurationMs:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)totalDurationMs;
- (void)writeTo:(id)arg1;

@end
