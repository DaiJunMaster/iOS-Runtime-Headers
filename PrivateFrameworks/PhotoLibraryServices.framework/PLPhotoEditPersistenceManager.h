/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditPersistenceManager : NSObject

@property (nonatomic, readonly) NSString *latestFormatIdentifier;
@property (nonatomic, readonly) NSString *latestFormatVersion;

- (id)_allConverterClasses;
- (id)_allImporterClasses;
- (Class)_latestExporterClass;
- (BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
- (id)dataFromPhotoEditModel:(id)arg1 imageWidth:(unsigned int)arg2 imageHeight:(unsigned int)arg3 exifOrientation:(int)arg4;
- (id)debugDescriptionForAdjustmentData:(id)arg1;
- (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
- (id)latestFormatIdentifier;
- (id)latestFormatVersion;
- (BOOL)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 baseOrientation:(int)arg5;

@end