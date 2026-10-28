#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01CDB220
// Address: 0x1cdb220 - 0x1cdb290
void sub_01CDB220_0x1cdb220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDB220_0x1cdb220");
#endif

    switch (ctx->pc) {
        case 0x1cdb244u: goto label_1cdb244;
        case 0x1cdb254u: goto label_1cdb254;
        case 0x1cdb260u: goto label_1cdb260;
        case 0x1cdb270u: goto label_1cdb270;
        default: break;
    }

    ctx->pc = 0x1cdb220u;

    // 0x1cdb220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdb220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdb224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdb224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdb228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdb228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdb22c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdb22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdb230: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cdb230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb234: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdb234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdb238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdb238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb23c: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDB23Cu;
    SET_GPR_U32(ctx, 31, 0x1CDB244u);
    ctx->pc = 0x1CDB240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB23Cu;
    // 0x1cdb240: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDB23Cu, 0x1CDB244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB244u;
label_1cdb244:
    // 0x1cdb244: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cdb244u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cdb248: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cdb248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cdb24c: 0xc736b4e  jal         func_1CDAD38
    ctx->pc = 0x1CDB24Cu;
    SET_GPR_U32(ctx, 31, 0x1CDB254u);
    ctx->pc = 0x1CDB250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB24Cu;
    // 0x1cdb250: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAD38u, 0x1CDB24Cu, 0x1CDB254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB254u;
label_1cdb254:
    // 0x1cdb254: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cdb254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdb258: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDB258u;
    SET_GPR_U32(ctx, 31, 0x1CDB260u);
    ctx->pc = 0x1CDB25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB258u;
    // 0x1cdb25c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDB258u, 0x1CDB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB260u;
label_1cdb260:
    // 0x1cdb260: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cdb260u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cdb264: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cdb264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cdb268: 0xc736b4e  jal         func_1CDAD38
    ctx->pc = 0x1CDB268u;
    SET_GPR_U32(ctx, 31, 0x1CDB270u);
    ctx->pc = 0x1CDB26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB268u;
    // 0x1cdb26c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAD38u, 0x1CDB268u, 0x1CDB270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB270u;
label_1cdb270:
    // 0x1cdb270: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1cdb270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1cdb274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdb274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb278: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cdb278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb27c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdb27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdb280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdb280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdb284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdb288: 0x87368aa  j           func_1CDA2A8
    ctx->pc = 0x1CDB288u;
    ctx->pc = 0x1CDB28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB288u;
    // 0x1cdb28c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA2A8u;
    sub_01CDA2A8_0x1cda2a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDB290u;
}
