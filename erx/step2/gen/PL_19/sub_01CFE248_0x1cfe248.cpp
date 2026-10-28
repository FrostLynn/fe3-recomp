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

// Function: sub_01CFE248
// Address: 0x1cfe248 - 0x1cfe2b8
void sub_01CFE248_0x1cfe248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFE248_0x1cfe248");
#endif

    switch (ctx->pc) {
        case 0x1cfe26cu: goto label_1cfe26c;
        case 0x1cfe27cu: goto label_1cfe27c;
        case 0x1cfe288u: goto label_1cfe288;
        case 0x1cfe298u: goto label_1cfe298;
        default: break;
    }

    ctx->pc = 0x1cfe248u;

    // 0x1cfe248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cfe248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cfe24c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cfe24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cfe250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cfe250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cfe254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfe254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfe258: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cfe258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe25c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cfe25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cfe260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfe260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe264: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE264u;
    SET_GPR_U32(ctx, 31, 0x1CFE26Cu);
    ctx->pc = 0x1CFE268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE264u;
    // 0x1cfe268: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE264u, 0x1CFE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE26Cu;
label_1cfe26c:
    // 0x1cfe26c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cfe26cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cfe270: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cfe270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cfe274: 0xc73f758  jal         func_1CFDD60
    ctx->pc = 0x1CFE274u;
    SET_GPR_U32(ctx, 31, 0x1CFE27Cu);
    ctx->pc = 0x1CFE278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE274u;
    // 0x1cfe278: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD60u, 0x1CFE274u, 0x1CFE27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE27Cu;
label_1cfe27c:
    // 0x1cfe27c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cfe27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cfe280: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE280u;
    SET_GPR_U32(ctx, 31, 0x1CFE288u);
    ctx->pc = 0x1CFE284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE280u;
    // 0x1cfe284: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE280u, 0x1CFE288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE288u;
label_1cfe288:
    // 0x1cfe288: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cfe288u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cfe28c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cfe28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cfe290: 0xc73f758  jal         func_1CFDD60
    ctx->pc = 0x1CFE290u;
    SET_GPR_U32(ctx, 31, 0x1CFE298u);
    ctx->pc = 0x1CFE294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE290u;
    // 0x1cfe294: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD60u, 0x1CFE290u, 0x1CFE298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE298u;
label_1cfe298:
    // 0x1cfe298: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1cfe298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1cfe29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfe29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe2a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cfe2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe2a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfe2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfe2a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfe2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfe2ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cfe2acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfe2b0: 0x873f4ae  j           func_1CFD2B8
    ctx->pc = 0x1CFE2B0u;
    ctx->pc = 0x1CFE2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE2B0u;
    // 0x1cfe2b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2B8u;
    sub_01CFD2B8_0x1cfd2b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFE2B8u;
}
