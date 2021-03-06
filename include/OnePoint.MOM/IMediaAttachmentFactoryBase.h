// --------------------------------------------------------------------------------------------------------------------
// <copyright file="IMediaAttachment" company="OnePoint Global">
//   Copyright (c) 2012 OnePoint Global Ltd. All rights reserved.
// </copyright>
// <summary>
//   This file was autogenerated and you should not edit it. It will be 
//   regenerated whenever the schema changes.
//   All changes should be made in MediaAttachment.cs and the mode.xml. 
// </summary>
// --------------------------------------------------------------------------------------------------------------------


/// <summary>
/// The IMediaAttachment Interface Data Object Base
/// </summary>

#import <Foundation/Foundation.h>


/// <summary>
/// The IMediaAttachmentFactoryBase Interface Data Object Base
/// </summary>
	
@protocol IMediaAttachmentFactoryBase <NSObject>
   
-(NSString *) SelectAllStatement;
-(NSString *)TableName;
-(NSString *)ByPkClause;
-(NSString *)InsertStatement;
-(NSString *)UpdateStatement;
-(NSString *)DeleteStatement;
-(NSString *)DeleteByPk;


-(void) AddMediaIDParameter:(DataHandler *) dataHandler withMediaID:(NSNumber*) MediaID;     
-(void) AddMediaTypeIDParameter:(DataHandler *) dataHandler withMediaTypeID:(NSNumber*) MediaTypeID;     
-(void) AddMediaUsageTypeIDParameter:(DataHandler *) dataHandler withMediaUsageTypeID:(NSNumber*) MediaUsageTypeID;     
-(void) AddMediaUsageTypeIDNullParameter:(DataHandler *) dataHandler;
-(void) AddNameParameter:(DataHandler *) dataHandler withName:(NSString *) Name;  
-(void) AddDescriptionParameter:(DataHandler *) dataHandler withDescription:(NSString *) Description;  
-(void) AddIsDeletedParameter:(DataHandler *) dataHandler withIsDeleted:(NSNumber*) IsDeleted;     
-(void) AddCommentsParameter:(DataHandler *) dataHandler withComments:(NSString *) Comments;  
-(void) AddRemarkParameter:(DataHandler *) dataHandler withRemark:(NSString *) Remark;  
-(void) AddBlobParameter:(DataHandler *) dataHandler withBlob:(NSMutableData *) Blob; 
-(void) AddFlashBlobParameter:(DataHandler *) dataHandler withFlashBlob:(NSMutableData *) FlashBlob; 
-(void) AddFlashBlobNullParameter:(DataHandler *) dataHandler;
-(void) AddSnapshotBlobParameter:(DataHandler *) dataHandler withSnapshotBlob:(NSMutableData *) SnapshotBlob; 
-(void) AddSnapshotBlobNullParameter:(DataHandler *) dataHandler;
-(void) AddCreatedDateParameter:(DataHandler *) dataHandler withCreatedDate:(NSDate *) CreatedDate; 
-(void) AddCreatedDateNullParameter:(DataHandler *) dataHandler;
-(void) AddUserIDParameter:(DataHandler *) dataHandler withUserID:(NSNumber*) UserID;     
-(void) AddUserIDNullParameter:(DataHandler *) dataHandler;
-(void) AddMovBlobParameter:(DataHandler *) dataHandler withMovBlob:(NSMutableData *) MovBlob; 
-(void) AddMovBlobNullParameter:(DataHandler *) dataHandler;
-(void) AddT3gBlobParameter:(DataHandler *) dataHandler withT3gBlob:(NSMutableData *) T3gBlob; 
-(void) AddT3gBlobNullParameter:(DataHandler *) dataHandler;
-(void) AddMp4BlobParameter:(DataHandler *) dataHandler withMp4Blob:(NSMutableData *) Mp4Blob; 
-(void) AddMp4BlobNullParameter:(DataHandler *) dataHandler;
-(void) AddOggBlobParameter:(DataHandler *) dataHandler withOggBlob:(NSMutableData *) OggBlob; 
-(void) AddOggBlobNullParameter:(DataHandler *) dataHandler;
-(void) AddWebmBlobParameter:(DataHandler *) dataHandler withWebmBlob:(NSMutableData *) WebmBlob; 
-(void) AddWebmBlobNullParameter:(DataHandler *) dataHandler;
-(void) AddLastUpdatedDateParameter:(DataHandler *) dataHandler withLastUpdatedDate:(NSDate *) LastUpdatedDate; 
-(void) AddLastUpdatedDateNullParameter:(DataHandler *) dataHandler;
-(id<IMediaAttachmentData>) FindByMediaID:(NSNumber *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByMediaTypeID:(NSNumber *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByMediaUsageTypeID:(NSNumber *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByName:(NSString *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByDescription:(NSString *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByIsDeleted:(NSNumber *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByComments:(NSString *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByRemark:(NSString *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByBlob:(NSMutableData *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByFlashBlob:(NSMutableData *) fieldValue;
        
-(id<IMediaAttachmentData>) FindBySnapshotBlob:(NSMutableData *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByCreatedDate:(NSDate *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByUserID:(NSNumber *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByMovBlob:(NSMutableData *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByT3gBlob:(NSMutableData *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByMp4Blob:(NSMutableData *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByOggBlob:(NSMutableData *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByWebmBlob:(NSMutableData *) fieldValue;
        
-(id<IMediaAttachmentData>) FindByLastUpdatedDate:(NSDate *) fieldValue;
        
-(id<IMediaAttachmentData>) CreateMediaAttachment:(id<IDataReader>)reader;

@end
    

   
    

