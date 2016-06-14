/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraSnapshotIDSRelayInitiator : HMDCameraSnapshotIDSRelay <HMFLogging, IDSSessionDelegate> {
    <HMDCameraSnapshotIDSRelayInitiatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _destinationID;
    NSMutableData * _fileLengthAndData;
    NSString * _filePath;
    IDSSession * _idsSession;
    bool  _idsSessionStarted;
    NSString * _requestIdentifier;
    NSObject<OS_dispatch_source> * _socketSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDCameraSnapshotIDSRelayInitiatorDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *destinationID;
@property (nonatomic, retain) NSMutableData *fileLengthAndData;
@property (nonatomic, retain) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSSession *idsSession;
@property (nonatomic) bool idsSessionStarted;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *socketSource;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callFileTransferFailed:(id)arg1;
- (void)_reset;
- (void)_sendFile;
- (void)_sendInvitation;
- (id)_smallData;
- (void)_startFileTransfer;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)destinationID;
- (id)fileLengthAndData;
- (id)filePath;
- (id)idsSession;
- (bool)idsSessionStarted;
- (id)initWithRequestIdentifier:(id)arg1 destinationID:(id)arg2 delegate:(id)arg3 queue:(id)arg4;
- (id)logIdentifier;
- (id)requestIdentifier;
- (void)sendFile:(id)arg1;
- (void)sendInvitation;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDestinationID:(id)arg1;
- (void)setFileLengthAndData:(id)arg1;
- (void)setFilePath:(id)arg1;
- (void)setIdsSession:(id)arg1;
- (void)setIdsSessionStarted:(bool)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSocketSource:(id)arg1;
- (id)socketSource;

@end