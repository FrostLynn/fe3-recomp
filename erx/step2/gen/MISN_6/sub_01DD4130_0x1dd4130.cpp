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

// Function: sub_01DD4130
// Address: 0x1dd4130 - 0x1dd4188
void sub_01DD4130_0x1dd4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD4130_0x1dd4130");
#endif

    switch (ctx->pc) {
        case 0x1dd4148u: goto label_1dd4148;
        default: break;
    }

    ctx->pc = 0x1dd4130u;

    // 0x1dd4130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd4134: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd4134u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd4138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd4138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd413c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd4140: 0xc774f46  jal         func_1DD3D18
    ctx->pc = 0x1DD4140u;
    SET_GPR_U32(ctx, 31, 0x1DD4148u);
    ctx->pc = 0x1DD4144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4140u;
    // 0x1dd4144: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D18u, 0x1DD4140u, 0x1DD4148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD4148u;
label_1dd4148:
    // 0x1dd4148: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd4148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd414c: 0x2405f6d5  addiu       $a1, $zero, -0x92B
    ctx->pc = 0x1dd414cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964949));
    // 0x1dd4150: 0x8c4e03a4  lw          $t6, 0x3A4($v0)
    ctx->pc = 0x1dd4150u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1dd4154: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd4154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd4158: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd4158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd415c: 0x240f015b  addiu       $t7, $zero, 0x15B
    ctx->pc = 0x1dd415cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
    // 0x1dd4160: 0x15cf0005  bne         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD4160u;
    {
        const bool branch_taken_0x1dd4160 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DD4164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4160u;
        // 0x1dd4164: 0x2408fffe  addiu       $t0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4160) {
            ctx->pc = 0x1DD4178u;
            goto label_1dd4178;
        }
    }
    ctx->pc = 0x1DD4168u;
    // 0x1dd4168: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1dd4168u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd416c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd416cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd4170: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x1dd4170u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
    // 0x1dd4174: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd4174u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dd4178:
    // 0x1dd4178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd4178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd417c: 0x8774f58  j           func_1DD3D60
    ctx->pc = 0x1DD417Cu;
    ctx->pc = 0x1DD4180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD417Cu;
    // 0x1dd4180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D60u;
    sub_01DD3D60_0x1dd3d60(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD4184u;
    // 0x1dd4184: 0x0  nop
    ctx->pc = 0x1dd4184u;
    // NOP
    ctx->pc = 0x1dd4188u;
}
