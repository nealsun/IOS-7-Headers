/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CHDrawing, NSCharacterSet, NSIndexSet, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CHRecognizer : NSObject
{
    struct CHNeuralNetwork *_engine;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    struct Network *_radicalClusterFST;
    struct Network *_formatGrammarFST;
    struct __LMCharacterNgramModel *_characterLanguageModel;
    struct __Mecabra *_mecabra;
    void *_mecabraStaticLexicon;
    void *_mecabraDynamicLexicon;
    NSURL *_learningDictionaryURL;
    struct VariantMap *_scVariantMap;
    struct VariantMap *_tcVariantMap;
    unsigned int _lastCharacterStrokeCount;
    NSMutableIndexSet *_lastCharacterStrokeIndexes;
    void **_icuTransliterator;
    CHDrawing *_savedDrawing;
    NSString *_savedTop1CandidateString;
    BOOL _saveDrawingUntilNextCandidateAccepted;
    CHDrawing *_cachedDrawing;
    map_d742812d _cachedResults;
    int _recognitionType;
    int _recognitionMode;
    NSCharacterSet *_activeCharacterSet;
    unsigned int _maxRecognitionResultCount;
}

+ (id)defaultPunctuationResultsForRecognitionType:(int)arg1;
@property(nonatomic) unsigned int maxRecognitionResultCount; // @synthesize maxRecognitionResultCount=_maxRecognitionResultCount;
@property(retain, nonatomic) NSCharacterSet *activeCharacterSet; // @synthesize activeCharacterSet=_activeCharacterSet;
@property(nonatomic) int recognitionMode; // @synthesize recognitionMode=_recognitionMode;
@property(nonatomic) int recognitionType; // @synthesize recognitionType=_recognitionType;
@property(nonatomic) map_d742812d cachedResults; // @synthesize cachedResults=_cachedResults;
@property(retain, nonatomic) CHDrawing *cachedDrawing; // @synthesize cachedDrawing=_cachedDrawing;
@property(nonatomic) BOOL saveDrawingUntilNextCandidateAccepted; // @synthesize saveDrawingUntilNextCandidateAccepted=_saveDrawingUntilNextCandidateAccepted;
@property(copy, nonatomic) NSString *savedTop1CandidateString; // @synthesize savedTop1CandidateString=_savedTop1CandidateString;
@property(copy, nonatomic) CHDrawing *savedDrawing; // @synthesize savedDrawing=_savedDrawing;
@property(nonatomic) NSIndexSet *lastCharacterStrokeIndexes; // @synthesize lastCharacterStrokeIndexes=_lastCharacterStrokeIndexes;
@property(nonatomic) unsigned int lastCharacterStrokeCount; // @synthesize lastCharacterStrokeCount=_lastCharacterStrokeCount;
@property(nonatomic) void **icuTransliterator; // @synthesize icuTransliterator=_icuTransliterator;
@property(nonatomic) struct VariantMap *tcVariantMap; // @synthesize tcVariantMap=_tcVariantMap;
@property(nonatomic) struct VariantMap *scVariantMap; // @synthesize scVariantMap=_scVariantMap;
@property(retain, nonatomic) NSURL *learningDictionaryURL; // @synthesize learningDictionaryURL=_learningDictionaryURL;
@property(nonatomic) void *mecabraDynamicLexicon; // @synthesize mecabraDynamicLexicon=_mecabraDynamicLexicon;
@property(nonatomic) void *mecabraStaticLexicon; // @synthesize mecabraStaticLexicon=_mecabraStaticLexicon;
@property(nonatomic) struct __Mecabra *mecabra; // @synthesize mecabra=_mecabra;
@property(nonatomic) struct __LMCharacterNgramModel *characterLanguageModel; // @synthesize characterLanguageModel=_characterLanguageModel;
@property(nonatomic) NSObject<OS_dispatch_queue> *recognitionQueue; // @synthesize recognitionQueue=_recognitionQueue;
@property(nonatomic) struct CHNeuralNetwork *engine; // @synthesize engine=_engine;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)rescoreCandidatesWithLangaugeModel:(vector_06f11b7b *)arg1 history:(id)arg2;
- (void)applyTransliterationAndSyntheticCandidates:(vector_06f11b7b *)arg1;
- (id)applySentenceTransliterationCandidates:(unsigned short *)arg1 codesLen:(int)arg2 codesMax:(int)arg3;
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2;
- (id)recognitionResultsForMultipleCharacterDrawing:(id)arg1 sortedStrokeIndices:(vector_55d7bafa *)arg2 network:(struct Network *)arg3 options:(id)arg4;
- (id)bestNetworkPaths:(struct Network *)arg1 count:(unsigned int)arg2 mecabraIDs:(vector_3203cf93 *)arg3;
- (id)recognitionResultsForSingleCharacterDrawing:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (id)initWithType:(int)arg1 mode:(int)arg2;
- (id)strokeIndexesForLastCharacter;
- (vector_de520796)completionsForCandidate:(id)arg1 candidateContext:(id)arg2 prefix:(id)arg3 option:(unsigned long)arg4;
- (vector_de520796)completionsForCandidate:(id)arg1 prefix:(id)arg2 option:(unsigned long)arg3;
- (void)candidateAccepted:(void *)arg1;
- (void)candidatesCleared;
- (void)updateUserDictionaryLexicon:(id)arg1;
- (void)updateAddressBookLexicon:(id)arg1;
- (void)logCandidateIfAppropriate:(void *)arg1;
- (void)releaseLMResources;
- (void)loadEngineModel;
- (id)initWithType:(int)arg1 mode:(int)arg2 learningDictionaryURL:(id)arg3;

@end

